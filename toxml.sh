#rm *Canonical*.x3d
#rm *roundtrip*.x3d

cat /dev/null > diffresults.txt

# node json2x3d.js TextSpecialCharacters.json ArchHalf.json ArchPrototype.json CoordinateAxes.json ExtrusionHeart.json NancyNativeTags.json NancyPrototypes.json ObliqueStrategies.json arc.json bubbles.json cobweb.json cobweb2.json createElementNSworks.json extrusion.json flip.json flipp.json flipper.json flowers2.json flowers4.json for.json force.json geo.json geobubbles.json mirror.json mirror2.json pp3.json qq3.json rubik.json rubikFurnace.json rubikOnFire.json rubikOnFireFixed.json sphere.json text.json x3dconnector.json x3dconnectorProto.json IcosahedronSubdivisionLevel5.json john.json john2.json | xargs sh canonical.sh
find ~/Downloads/www.web3d.org/x3d/content/examples/ -type f -name '*.json' -print0 | xargs -0 node json2x3d.js | xargs -0 sh canonical.sh
