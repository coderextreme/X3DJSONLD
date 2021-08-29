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
        texture=ImageTexture(url=['../../images/4/Malacca1-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.8445483343071585,101.29356261898111,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[82,75,57,57,62,52,89,62,47,45,36,43,15,15,26,34,34,26,15,10,10,3,77,68,61,34,35,58,60,68,44,25,38,33,13,18,18,31,35,31,13,7,27,6,62,67,53,41,27,45,46,58,59,40,28,18,16,17,18,21,26,24,16,7,23,34,70,50,46,48,21,45,61,52,40,25,31,14,7,13,6,6,10,7,20,23,15,27,49,57,60,60,42,32,52,38,23,21,17,19,4,6,20,21,23,21,25,30,14,16,53,51,50,37,43,21,17,18,23,24,18,5,4,17,19,4,18,26,19,41,31,19,37,35,36,26,23,21,10,14,12,19,7,7,18,5,6,11,10,37,27,44,29,26,34,32,28,22,20,12,9,5,12,11,7,21,20,4,10,21,38,31,41,34,44,45,31,22,26,14,11,9,6,8,16,23,24,26,22,7,14,20,28,23,42,31,39,23,26,13,21,14,13,8,18,3,15,2,27,27,19,24,15,15,28,35,28,33,26,17,23,9,18,15,6,8,7,2,17,25,29,5,13,15,16,34,29,43,28,32,29,18,12,12,13,7,3,9,7,14,20,28,34,4,23,18,26,32,34,37,31,32,35,21,7,9,3,23,1,12,10,18,3,20,29,12,39,45,45,29,39,41,29,29,28,15,9,4,15,5,3,19,26,4,10,13,12,32,63,44,36,52,40,49,30,25,18,27,9,12,13,18,5,21,25,25,20,17,40,48,66,42,52,52,22,41,23,15,23,28,14,6,16,11,11,25,14,22,22,11,40,48,51,57,48,31,30,27,26,35,31,36,29,9,35,25,21,19,19,32,16,12,46,57,51,33,43,34,21,24,19,4,35,29,37,31,40,32,22,11,23,26,18,16,50,31,20,16,10,11,29,26,32,9,29,29,56,44,43,26,23,6,17,15,18,21,28,36,21,17,10,5,6,32,27,18,32,38,37,45,19,10,15,6,8,28,23,30,12,22,27,28,7,5,6,21,15,28,36,37,38,37,19,15,10,17,10,16,48,27,22,16,9,30,0,5,5,25,14,35,37,36,33,30,13,13,12,11,11,20,42,39,37,32,11,28,9,4,13,30,6,4,38,38,39,39,10,13,14,12,13,19,39,38,37,26,11,28,10,3,17,34,6,3,37,39],
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
