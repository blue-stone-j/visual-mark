
# colorful output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[0;33m'
BLUE='\033[0;34m'
NC='\033[0m'

# lupdate .  -ts translations/cn.ts
# lrelease translations/cn.ts -qm translations/cn.qm

echo -e "${BLUE}Start working.${NC}"

# set varible
echo -e "${BLUE}Start setting varibles.${NC}"
PROJECT_NAME=visual_mark
PROJECT_NAME_U=$(echo "$PROJECT_NAME" | tr '[:lower:]' '[:upper:]')
PROJECT_NAME_L=$(echo "$PROJECT_NAME" | tr '[:upper:]' '[:lower:]')

VISUAL_MARK_VERSION_MAJOR=0
VISUAL_MARK_VERSION_MINOR=0
VISUAL_MARK_VERSION_PATCH=1
VISUAL_MARK_VERSION=${VISUAL_MARK_VERSION_MAJOR}.${VISUAL_MARK_VERSION_MINOR}.${VISUAL_MARK_VERSION_PATCH}

NEED_PACK=false

CMAKE_INSTALL_PREFIX=$(pwd)/install/$PROJECT_NAME-${VISUAL_MARK_VERSION}
echo -e "${GREEN}Set varibles completed.${NC}"

# rm -rf build 
# rm -rf $CMAKE_INSTALL_PREFIX 

# build
echo -e "${BLUE}Start building.${NC}"
mkdir -p build &&
cd build &&
cmake -D${PROJECT_NAME_U}_VERSION=${VISUAL_MARK_VERSION} \
      -DCMAKE_INSTALL_PREFIX=$CMAKE_INSTALL_PREFIX \
      -DNEED_PACK=$NEED_PACK \
      .. &&
make install -j6

if [ ! $? -eq 0 ]; then
  echo -e "${RED}Failed to build.${NC}"
  exit
fi

echo -e "${GREEN}Build completed.${NC}"

# pack
if [ "$#" -eq 0 ] || [ $1 != "pack" ] || [ ! NEED_PACK ]; then
  echo -e "${BLUE}Skip packing.${NC}"
  echo -e "${GREEN}All tasks have been done.${NC}"
  # cd ${CMAKE_INSTALL_PREFIX}/bin &&
  # visual_mark &&
  exit
fi

echo -e "${BLUE}Start packing.${NC}"

mkdir -p ../install &&
cd ../install &&
tar -zcvf $PROJECT_NAME-VISUAL_MARK_VERSION.tar.gz $PROJECT_NAME-VISUAL_MARK_VERSION &&
cd $PROJECT_NAME-VISUAL_MARK_VERSION &&

dpkg-buildpackage -us -uc &&

cd .. &&

sudo dpkg --purge $PROJECT_NAME &&

sudo dpkg -i ${PROJECT_NAME_L}_1.0.0_amd64.deb 

date "+%Y-%m-%d %H:%M"
echo -e "${GREEN}All tasks have been done: ${NC}"

