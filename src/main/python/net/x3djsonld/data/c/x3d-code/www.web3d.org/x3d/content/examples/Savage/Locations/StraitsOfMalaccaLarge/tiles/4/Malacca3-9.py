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
        texture=ImageTexture(url=['../../images/4/Malacca3-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-4.689706692856765,101.90825043207244,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[0,0,2,2,3,2,1,2,2,3,2,3,4,2,3,3,2,3,3,3,3,3,1,0,0,0,2,2,1,1,2,4,2,1,3,2,3,4,3,3,2,4,3,3,0,0,1,2,2,3,3,3,3,3,3,4,3,4,4,3,3,3,3,4,3,5,1,0,2,3,1,2,3,2,5,4,3,3,4,5,3,4,4,2,3,1,2,3,0,1,1,1,2,2,4,1,4,4,3,4,3,3,4,3,4,4,3,3,1,5,1,1,2,2,0,3,2,1,3,3,4,3,5,4,2,4,3,3,2,2,4,23,1,2,2,3,4,1,4,5,1,3,3,3,3,2,2,3,2,3,3,0,90,81,2,2,2,2,3,1,2,2,3,3,4,3,4,3,1,2,2,1,-1,29,70,83,0,1,3,2,4,3,0,1,3,1,4,4,3,3,4,4,4,17,21,22,69,51,1,1,0,3,2,5,2,2,3,3,3,1,2,1,4,3,9,21,25,62,129,150,3,2,2,3,4,3,4,3,1,0,1,2,4,4,7,10,50,52,55,230,246,220,3,1,3,2,3,4,3,3,2,1,2,2,2,7,16,20,77,165,324,173,233,306,2,4,1,5,3,2,2,2,2,3,4,4,8,14,28,81,153,148,194,399,838,839,3,2,5,1,1,3,3,1,2,4,2,9,19,37,84,220,398,185,446,471,1034,1282,2,2,3,2,2,3,2,1,4,4,5,14,34,144,264,316,614,540,874,1000,833,974,3,3,4,4,2,2,3,2,3,5,16,56,193,194,515,531,605,1212,1421,785,1287,1365,4,1,4,2,1,1,2,2,12,9,44,79,340,452,433,787,631,1243,596,796,824,858,3,3,4,3,2,5,2,5,6,27,72,210,246,391,895,883,1136,414,353,520,466,415,3,1,3,2,2,2,1,3,11,11,15,77,102,387,1032,990,383,268,397,320,328,368,2,1,3,2,2,2,4,3,19,30,50,25,153,592,984,647,495,321,287,273,428,477,2,3,2,4,5,3,3,5,27,60,37,89,103,254,725,654,366,384,473,487,683,556,3,3,2,2,4,3,3,6,21,60,46,60,127,268,671,661,375,380,473,465,639,526],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])))])
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
