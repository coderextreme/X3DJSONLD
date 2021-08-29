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
        texture=ImageTexture(url=['../../images/4/Malacca3-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4806733645214747,103.38106271813204,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[0,2,11,10,18,17,20,13,8,8,16,31,25,58,30,18,11,6,45,36,28,11,-2,7,8,6,14,14,9,8,9,8,12,31,26,35,14,16,7,11,33,39,15,6,4,6,14,15,8,14,14,14,23,16,48,48,46,19,11,14,9,30,49,18,9,7,5,4,15,15,9,13,18,16,29,26,71,33,69,30,38,13,34,52,32,15,7,17,7,10,14,13,15,9,14,21,36,50,59,25,50,39,27,12,30,41,39,11,10,19,14,12,14,13,18,18,21,20,58,86,61,58,53,35,20,19,45,31,22,32,28,28,14,14,16,16,15,13,23,37,66,178,121,42,33,32,42,60,49,19,28,22,34,68,12,12,11,13,12,22,19,70,308,256,187,54,50,152,27,33,54,37,48,48,46,45,12,8,11,12,14,10,21,28,258,387,294,50,43,42,20,34,42,17,35,48,65,84,14,7,9,13,15,13,25,37,137,448,184,55,35,27,19,37,31,27,55,39,53,42,11,14,15,15,9,39,28,38,43,171,133,60,39,32,22,34,32,42,54,89,83,45,13,13,10,8,8,13,30,30,57,66,41,64,47,19,23,35,47,60,71,78,56,74,12,11,12,15,13,15,14,21,33,36,42,39,23,46,36,48,51,73,76,75,37,72,12,12,11,10,12,28,17,18,27,41,41,29,62,74,65,66,62,43,70,65,41,43,9,11,13,11,17,16,24,24,62,59,35,46,84,63,54,49,26,41,39,46,41,79,10,27,10,35,33,12,59,103,74,44,48,41,66,54,56,47,39,45,34,56,21,33,11,9,12,25,32,39,101,58,43,55,56,72,64,48,39,24,54,36,28,49,38,17,14,9,26,33,54,94,81,60,59,46,55,60,84,73,35,39,25,25,20,31,26,34,15,88,40,32,51,83,130,50,46,59,60,53,49,52,47,58,48,17,22,17,30,15,23,23,39,47,63,69,51,43,43,55,56,41,63,52,39,54,38,44,55,48,18,27,27,62,27,28,72,48,35,47,44,25,49,49,37,39,25,47,66,34,46,20,45,27,60,54,36,86,32,54,53,33,33,19,25,48,66,26,15,35,47,16,14,77,70,27,51,53,38,90,32,50,51,30,38,20,26,47,66,21,16,35,34,22,15,71,64,27],
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
