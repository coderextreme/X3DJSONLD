#!/bin/sh
export X3DRESOURCES=www.web3d.org/
find cobweb.json ArchHalf.json ExtrusionHeart.json flowers2.json geobubbles.json IcosahedronSubdivisionLevel5.json pp3.json qq3.json abox.json  flipper.json ArchPrototype.json CoordinateAxes.json arc.json box.json force.json flowers4.json flowers7.json bubbles.json geo.json mirror2.json mirror.json NancyNativeTags.json rubikFurnace.json rubik.json rubikOnFire.json ObliqueStrategies.json NancyPrototypes.json $X3DRESOURCES -name '*.json' -print0 | xargs -0 ${1-node} json2all.js
