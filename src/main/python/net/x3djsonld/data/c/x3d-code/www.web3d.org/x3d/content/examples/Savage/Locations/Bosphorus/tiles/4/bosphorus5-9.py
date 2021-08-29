###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/4/bosphorus5-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.898245841898074,29.10513432121479,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[0,0,0,0,0,0,0,-4,0,-1,-13,-1,1,0,-4,-6,-20,-15,-2,3,9,13,0,-1,0,0,0,-3,0,0,0,-3,-2,-4,-2,0,-1,-18,-4,1,4,6,20,24,0,-1,0,0,0,0,0,-1,-6,0,0,-10,-1,-1,-11,3,1,3,4,13,28,30,-1,0,0,0,0,0,0,-2,0,0,-8,2,3,0,1,4,1,4,12,32,45,45,0,0,-2,0,0,0,0,-1,0,-1,0,4,45,30,12,6,7,7,15,36,50,54,1,0,0,0,-2,1,-4,-1,-4,-3,0,29,90,52,25,11,13,13,15,30,45,47,0,0,0,0,-3,-1,0,-2,-3,-6,5,32,96,52,23,17,21,24,25,26,37,38,1,1,0,-1,0,2,-2,-15,-8,1,5,26,76,45,18,18,21,32,36,34,39,39,0,0,0,-5,-1,-3,-24,0,-9,0,2,6,10,10,14,19,22,29,39,37,43,45,0,0,0,1,0,5,-4,-8,0,5,4,5,10,23,27,28,26,26,35,41,51,53,0,0,0,-2,-6,-2,-3,-6,3,7,10,16,23,33,38,43,35,33,36,39,45,47,0,0,0,7,0,-6,-3,0,9,12,16,23,35,45,50,47,53,55,62,52,55,54,1,-3,0,0,-2,-1,0,7,21,26,29,30,40,56,69,67,79,95,92,61,65,66,-4,-4,0,0,0,0,3,8,20,31,39,42,55,64,72,80,80,121,105,74,82,82,-7,-1,0,-8,-3,0,11,8,16,26,39,54,55,80,93,99,121,113,118,95,108,103,0,0,0,-4,-2,9,33,19,18,29,34,53,67,80,101,115,169,172,138,116,124,128,-2,0,-4,0,0,11,24,22,26,29,32,44,64,80,99,157,173,198,166,149,163,165,5,-6,-6,2,6,7,9,21,39,37,40,54,60,70,111,183,242,229,191,209,225,236,-2,-1,-1,1,17,17,9,14,35,44,53,53,72,80,113,155,255,291,220,293,293,291,-3,0,0,7,9,29,32,13,32,38,55,63,78,98,107,154,235,295,286,353,328,315,-8,0,3,9,17,21,43,29,25,45,65,71,68,89,112,140,208,261,300,365,353,338,0,8,9,9,22,33,39,51,30,42,41,48,65,91,117,154,209,282,267,316,318,306,10,22,25,16,27,40,47,59,48,49,61,84,100,91,98,122,177,202,232,282,343,334,10,21,25,20,26,38,48,60,50,48,64,87,110,99,101,122,170,191,221,272,344,341],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
