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
        texture=ImageTexture(url=['../../images/4/Malacca3-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4806733645214747,103.79856273796223,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[11,-43,-8,7,27,17,45,41,19,38,33,13,-7,0,5,11,29,29,8,29,55,40,6,8,25,24,19,21,39,19,20,36,12,17,-8,0,12,16,18,36,40,50,43,40,7,7,26,26,32,18,27,38,54,35,14,12,0,5,14,34,39,34,35,11,48,49,17,7,35,82,44,68,42,17,34,35,33,8,-2,14,5,8,15,14,15,38,45,48,19,30,12,48,55,45,54,44,32,11,19,13,3,20,21,5,7,17,23,39,23,31,28,35,23,41,35,37,33,33,49,45,27,17,4,35,23,30,33,12,12,13,31,35,68,41,49,44,46,43,26,44,14,36,15,10,8,11,26,34,46,16,30,19,8,4,45,48,50,28,34,33,32,34,39,24,12,5,30,29,45,61,48,31,16,36,29,17,84,56,24,24,55,41,23,18,9,11,11,15,28,34,24,42,42,20,10,40,28,21,42,58,52,40,48,45,43,31,31,15,18,43,37,46,50,47,49,29,15,25,51,40,45,68,61,62,52,17,27,41,22,18,17,17,21,23,106,41,66,55,37,54,67,51,74,85,62,54,63,38,25,29,14,9,29,26,55,64,63,66,50,49,39,38,55,48,72,69,69,77,50,42,38,10,13,13,16,17,53,68,72,80,48,51,35,13,46,47,43,79,45,55,41,22,7,13,4,12,33,56,32,56,60,55,31,38,21,27,39,27,79,38,48,45,33,32,26,31,11,52,53,74,76,69,132,34,41,23,17,21,17,27,33,56,20,35,35,37,27,11,21,32,42,39,66,70,39,29,48,18,11,10,16,35,17,36,18,43,19,19,6,18,39,10,32,53,40,62,48,16,36,28,12,9,10,34,34,13,15,28,10,14,7,30,43,29,39,62,67,41,22,19,11,30,11,3,43,27,15,14,13,8,11,29,24,12,37,95,51,67,44,76,38,29,17,20,7,10,23,5,27,35,34,27,13,17,18,22,57,39,59,63,73,86,53,37,29,12,16,17,32,5,27,83,31,26,15,48,25,29,58,36,62,59,55,47,59,16,41,13,16,16,44,4,27,78,52,40,34,26,34,81,30,29,117,47,45,30,45,24,21,12,9,19,4,6,27,69,82,45,42,30,37,116,32,36,126,51,42,32,37,29,17,11,9,17,4,5],
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
