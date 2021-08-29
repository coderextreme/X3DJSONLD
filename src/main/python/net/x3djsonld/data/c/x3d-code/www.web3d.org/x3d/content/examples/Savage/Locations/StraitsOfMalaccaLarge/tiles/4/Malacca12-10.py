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
        texture=ImageTexture(url=['../../images/4/Malacca12-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.376668737772939,102.91900048008048,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[751,653,109,106,133,138,54,16,28,18,11,106,5,6,6,7,7,6,7,7,7,5,251,246,310,123,214,332,299,39,35,21,13,10,5,5,7,6,5,7,7,7,6,6,214,269,366,244,323,409,70,34,59,35,49,7,5,5,7,6,6,7,7,7,7,6,364,354,185,214,317,93,68,54,268,202,21,2,5,6,5,7,7,7,6,6,5,6,238,115,87,110,258,180,48,37,148,162,53,8,4,7,6,5,6,7,7,6,5,6,621,183,98,77,313,280,29,24,64,53,7,12,4,5,4,5,5,6,6,6,5,7,1175,635,56,278,78,76,47,22,45,42,6,6,6,5,6,4,5,5,4,4,7,6,517,716,288,49,84,40,42,34,26,132,17,6,6,7,6,4,3,4,6,4,4,5,818,246,77,41,68,312,28,26,16,18,6,5,5,6,7,5,8,6,5,5,4,6,1291,912,258,67,69,185,36,17,41,67,36,6,6,6,6,6,7,4,7,6,3,3,1205,852,66,94,39,33,20,19,14,42,16,5,6,6,5,5,6,6,6,7,6,6,1091,314,288,80,74,53,24,25,28,11,5,7,6,8,5,6,3,5,6,5,6,5,554,556,132,77,55,40,22,20,21,22,5,6,6,6,5,7,4,6,5,6,5,7,844,132,42,48,176,45,20,16,26,7,6,7,7,7,5,5,4,6,6,4,5,5,194,54,37,27,222,32,31,84,8,5,6,6,6,7,6,7,6,6,5,5,5,6,452,25,15,29,27,15,34,10,5,5,5,5,6,6,6,7,7,5,5,5,5,5,57,23,15,27,18,9,21,20,6,7,5,5,6,5,6,5,6,7,7,7,6,6,29,35,16,25,27,164,25,6,6,7,7,5,5,5,5,6,6,6,7,8,5,6,314,41,18,20,12,48,10,4,5,7,7,7,6,7,5,5,6,5,6,7,8,7,46,78,12,11,9,13,4,5,5,6,6,7,8,7,6,6,6,4,5,6,5,7,31,12,14,8,10,7,5,6,4,5,5,5,6,6,8,6,6,6,4,4,6,6,35,16,11,7,10,8,5,6,5,5,6,5,7,7,6,6,7,6,5,4,7,5],
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
