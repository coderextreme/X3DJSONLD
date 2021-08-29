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
        texture=ImageTexture(url=['../../images/4/Malacca15-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(7.398793881316173,98.87600028804829,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[5,4,3,4,3,3,4,3,-24,2,0,7,20,7,12,31,4,16,30,67,140,395,5,5,4,4,4,4,4,4,1,5,9,14,15,16,6,11,15,29,30,50,570,599,5,4,4,4,4,4,3,2,3,5,9,72,97,6,30,11,24,32,43,274,792,1024,5,5,4,5,3,6,4,6,3,5,31,170,137,15,38,16,17,17,36,265,837,787,4,4,3,3,79,3,5,6,3,10,67,69,111,23,16,25,29,25,74,894,247,79,3,3,3,3,139,4,4,1,3,7,37,127,32,25,31,14,20,42,119,511,122,66,4,4,3,4,7,45,4,2,9,27,123,92,65,15,5,59,32,62,105,396,159,210,5,5,3,3,8,138,2,3,7,10,103,40,23,18,24,36,75,89,125,314,426,114,5,5,4,4,18,5,8,7,11,48,55,34,35,35,19,284,62,261,470,174,100,77,6,4,3,6,17,9,20,12,37,42,79,47,32,17,38,60,132,163,507,233,77,60,6,6,37,4,69,9,13,41,44,113,141,114,65,34,38,37,68,468,261,302,52,47,7,6,6,74,5,48,31,103,153,119,78,85,83,37,24,41,58,383,308,103,42,40,5,5,0,0,10,20,55,37,60,222,102,133,110,57,31,39,69,288,218,274,56,37,3,6,8,22,10,8,150,86,85,294,252,91,315,44,42,39,53,91,162,125,31,26,2,3,7,16,20,47,29,85,87,82,84,156,60,120,49,37,39,65,174,72,24,24,11,8,16,45,16,54,76,70,63,70,77,78,91,80,56,53,56,104,169,102,30,28,41,150,16,31,25,95,69,115,78,60,76,116,291,143,68,50,48,75,232,63,38,17,57,103,28,111,191,75,83,130,57,49,73,92,91,156,64,60,53,69,375,341,19,18,110,157,137,121,102,110,79,227,57,41,46,62,71,62,53,61,69,154,452,201,38,30,588,450,288,85,57,62,116,82,42,36,53,49,61,51,44,71,537,769,668,299,32,36,119,338,95,64,47,69,103,47,44,52,28,51,48,32,36,59,531,786,114,250,25,26,117,397,94,65,52,72,94,49,53,52,30,54,51,32,37,60,548,722,100,263,27,25],
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
