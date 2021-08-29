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
        texture=ImageTexture(url=['../../images/4/Malacca3-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4806733645214747,100.45856257932074,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[15,16,15,18,33,51,68,63,44,44,70,45,40,32,20,14,11,23,49,42,27,23,18,17,13,25,41,51,41,36,32,28,42,56,40,38,22,15,13,30,34,34,19,14,17,16,51,48,68,73,41,31,27,25,48,42,41,23,22,14,13,23,25,28,17,13,18,23,46,50,55,31,35,38,12,18,32,50,26,21,18,23,13,25,38,26,15,11,21,34,42,45,32,36,27,37,25,17,17,39,32,25,20,24,14,11,25,25,20,14,36,38,42,38,48,35,36,29,24,14,19,14,36,18,18,7,30,16,16,17,13,11,55,50,36,39,17,20,21,26,12,19,7,8,20,17,14,17,15,14,11,10,8,11,54,38,39,30,36,20,18,19,18,11,9,14,7,5,9,9,21,19,8,9,8,17,42,34,27,27,21,22,29,22,23,9,13,20,20,13,19,18,17,12,9,13,7,26,54,29,29,35,34,27,29,14,12,31,34,35,25,13,10,8,11,26,19,21,9,11,60,39,21,31,30,28,44,28,20,51,47,37,12,13,8,7,21,22,20,10,12,13,49,48,30,45,33,31,30,27,45,32,44,26,11,15,13,10,9,23,13,10,11,21,65,45,44,52,35,34,28,25,36,42,25,20,22,14,20,11,11,12,9,16,9,6,56,63,60,53,31,46,57,25,34,34,40,39,23,15,21,17,10,10,13,16,17,14,43,64,52,52,38,59,37,26,39,40,55,41,28,17,14,28,13,24,11,14,9,7,55,32,49,45,51,49,28,22,42,42,38,48,32,29,15,11,11,24,11,7,8,5,33,40,42,35,61,47,22,19,17,21,20,41,27,22,23,11,14,9,11,9,8,5,26,36,26,26,43,40,27,16,14,14,30,14,14,16,29,30,27,12,10,8,7,5,33,35,25,19,39,38,35,17,26,13,15,14,17,14,32,34,31,31,10,8,8,7,41,18,16,17,26,18,20,15,32,20,29,14,14,14,33,27,24,34,9,9,6,23,19,14,18,22,22,14,12,14,28,40,28,13,11,25,40,34,35,11,19,30,33,25,23,12,17,20,20,14,11,13,27,22,17,14,14,27,14,33,33,15,28,32,28,28,24,13,16,17,16,15,12,15,30,26,17,12,15,19,16,32,33,15,30,31,30,28],
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
