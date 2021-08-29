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
        texture=ImageTexture(url=['../../images/4/Malacca4-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.7987358796286328,102.96356269830186,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[13,27,44,36,15,9,11,9,12,12,15,17,11,11,10,13,14,20,21,22,50,51,38,42,29,18,10,11,13,10,13,11,14,14,12,11,10,11,14,16,16,38,56,61,35,76,43,18,13,5,13,11,12,12,13,13,16,10,9,14,15,16,25,29,55,45,34,175,37,16,15,10,9,10,14,10,13,14,13,12,10,10,15,15,15,52,85,61,47,171,33,15,14,7,11,5,10,15,11,13,15,19,14,12,11,13,21,50,45,53,7,17,18,10,10,10,15,11,9,11,14,10,15,23,15,14,25,27,21,60,60,58,3,10,5,8,15,4,8,4,9,7,8,10,8,41,17,15,19,47,25,44,49,52,11,11,21,13,12,12,8,11,8,8,13,11,30,17,37,44,13,36,62,63,57,65,8,10,116,19,9,12,7,8,11,13,12,13,17,61,53,33,47,41,57,74,90,88,15,24,45,12,9,10,5,11,5,8,3,9,9,18,52,18,48,62,81,75,84,63,7,51,16,13,9,10,10,15,17,9,34,7,13,27,48,31,39,62,64,58,52,60,43,25,10,8,8,12,6,35,11,11,7,6,9,20,53,34,41,58,65,70,64,70,7,11,8,11,11,14,8,13,10,14,36,12,22,24,26,48,64,65,75,58,58,80,8,5,8,10,15,18,10,14,16,16,33,15,8,23,27,35,81,68,64,54,173,80,13,8,12,9,6,10,24,25,28,57,27,12,29,31,36,60,57,68,72,68,123,71,7,13,12,9,24,5,19,8,30,28,28,17,33,19,56,42,61,34,74,37,367,164,11,7,11,22,6,12,10,17,14,31,31,33,34,33,34,31,48,30,51,49,260,88,8,7,8,7,28,31,29,11,39,23,28,29,30,50,52,45,50,31,43,29,32,108,6,6,12,5,26,8,30,25,24,36,49,42,55,45,51,50,25,21,30,34,38,41,8,5,8,7,5,22,16,15,35,41,41,38,46,58,52,53,52,27,27,30,34,40,11,9,5,6,27,22,36,24,21,28,44,39,38,43,82,61,49,39,32,56,69,57,48,3,10,7,12,15,25,15,22,56,50,39,48,35,39,46,53,31,25,39,51,50,72,5,21,6,10,12,27,18,20,57,50,34,43,33,37,46,58,32,23,41,52,47],
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
