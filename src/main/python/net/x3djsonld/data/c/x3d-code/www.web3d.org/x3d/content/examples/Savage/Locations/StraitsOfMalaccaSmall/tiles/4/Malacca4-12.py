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
        texture=ImageTexture(url=['../../images/4/Malacca4-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.7987358796286328,103.79856273796223,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[27,69,82,45,42,30,37,116,32,36,126,51,42,32,37,29,17,11,9,17,4,5,47,183,86,27,29,30,40,60,45,23,60,59,32,48,26,15,9,6,13,12,1,4,50,219,55,120,343,201,210,42,43,20,25,69,52,75,15,11,12,7,14,5,2,4,126,258,166,178,180,351,398,105,20,13,31,29,30,38,18,10,9,6,13,4,4,5,263,574,395,105,81,222,278,92,22,15,36,8,51,57,21,10,9,6,2,3,3,3,54,50,64,104,36,44,42,28,8,42,13,7,13,14,9,11,10,1,5,4,3,3,198,102,45,15,16,13,28,9,14,27,28,8,6,17,10,6,10,3,3,3,4,3,211,49,27,36,45,41,17,11,17,9,14,32,14,7,11,9,3,2,3,1,4,3,31,46,64,40,21,11,30,13,50,26,11,13,23,9,8,5,8,2,3,3,3,2,70,48,41,49,33,37,19,10,34,25,31,26,32,14,11,8,6,18,4,2,3,3,191,163,52,31,33,31,14,32,22,51,51,37,8,12,8,11,10,3,4,3,4,1,114,158,68,36,28,8,11,19,322,43,20,11,24,16,6,5,26,4,2,3,3,1,238,61,51,44,35,13,11,24,111,81,40,21,7,17,12,17,32,2,2,2,3,1,74,37,31,56,72,18,11,31,65,52,32,10,18,30,16,11,1,2,2,2,3,3,50,44,50,111,30,43,14,46,64,44,40,35,12,39,22,16,1,1,2,1,3,2,47,43,20,40,28,31,13,47,56,54,37,30,32,37,35,2,1,2,1,1,1,1,34,30,20,51,25,81,30,51,39,61,51,34,43,22,14,0,1,0,1,2,0,1,63,21,36,29,27,12,43,65,62,39,58,53,26,8,3,4,0,2,3,2,2,0,58,26,32,35,25,31,17,45,47,29,39,62,12,33,1,3,3,1,2,0,2,0,49,47,43,20,27,24,38,48,34,63,46,15,27,1,1,4,3,2,3,2,1,1,45,31,38,23,43,35,23,51,48,37,25,49,51,2,2,3,2,3,2,2,1,3,60,49,57,55,40,24,19,44,30,33,68,83,2,2,2,3,2,3,3,3,4,3,61,46,53,48,42,24,22,50,27,40,80,59,3,2,3,3,3,2,3,3,3,3],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])))])
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
