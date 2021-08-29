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
        texture=ImageTexture(url=['../../images/5/newport16-24.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.26357234975819,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[12,14,13,22,15,6,10,2,17,15,13,7,8,9,13,17,17,17,16,16,17,18,16,19,18,29,23,19,17,4,12,13,12,11,11,13,18,23,22,21,18,20,22,22,21,22,21,26,31,25,27,19,12,13,11,10,13,17,21,24,26,24,21,24,26,26,23,24,25,28,35,33,31,29,18,13,11,11,14,17,22,25,27,26,25,26,29,29,21,22,26,32,38,41,34,35,29,18,13,11,14,16,22,25,26,26,29,29,30,30,25,23,27,34,38,43,41,37,36,21,17,16,16,16,17,21,25,27,29,31,32,33,27,29,30,34,45,48,46,42,34,27,21,14,16,19,19,22,24,27,28,30,33,34,29,30,33,39,45,48,50,49,43,31,21,21,18,18,20,24,24,27,28,30,31,32,34,35,35,42,43,49,55,54,47,42,33,25,20,21,21,24,28,28,28,27,25,25,37,38,40,42,46,50,52,53,53,45,36,28,25,24,26,27,26,28,27,24,19,18,35,37,41,42,49,49,54,54,52,51,41,34,31,30,29,30,28,26,24,20,15,13,36,35,39,45,47,53,55,53,53,49,47,41,38,35,35,31,31,24,23,19,13,11,36,37,41,45,49,52,54,54,50,52,50,44,44,41,39,35,32,29,24,19,12,11,37,39,42,46,49,54,55,55,54,54,52,53,47,43,42,37,36,32,26,20,12,11,38,40,41,47,49,54,56,57,57,56,56,53,53,48,43,42,37,33,27,21,14,12,39,42,43,45,50,55,55,60,58,58,59,59,53,52,50,44,38,35,28,21,15,14,36,43,47,49,60,59,60,62,61,61,62,60,61,60,54,47,40,35,29,21,15,15,43,43,45,49,55,59,63,55,62,61,62,64,61,59,55,51,44,35,30,23,16,16,40,43,51,54,54,60,62,62,63,59,64,67,64,54,56,52,46,38,32,24,18,17,46,46,49,50,57,57,63,64,63,61,63,63,60,61,55,53,48,40,34,26,19,18,45,47,50,56,63,64,62,60,57,58,57,61,59,58,54,52,47,40,34,27,22,21,49,49,52,57,60,61,67,62,58,60,58,58,62,64,54,50,47,40,35,27,23,22,52,52,52,57,60,64,66,62,57,56,60,65,65,59,51,47,44,40,34,29,24,23,51,51,52,57,61,65,68,64,56,57,59,64,64,58,51,47,44,40,35,29,24,23],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])))])
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
