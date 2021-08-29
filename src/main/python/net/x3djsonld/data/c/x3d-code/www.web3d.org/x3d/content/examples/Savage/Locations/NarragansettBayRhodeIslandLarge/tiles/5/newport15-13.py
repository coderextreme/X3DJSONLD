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
        texture=ImageTexture(url=['../../images/5/newport15-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47634988941996,-71.50541124423569,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[25,23,22,23,20,18,18,17,18,21,22,23,21,17,16,16,18,19,17,15,18,19,23,22,23,24,21,20,19,20,19,20,21,20,19,18,16,20,20,21,18,15,18,18,25,23,24,23,22,21,21,24,23,22,21,20,19,20,18,19,18,21,20,16,17,18,27,26,26,24,22,23,23,24,24,22,20,18,16,16,17,18,20,22,19,17,16,15,26,25,23,22,23,26,27,24,25,24,23,20,18,17,16,17,18,21,18,16,16,16,27,25,24,23,26,29,30,29,27,25,24,23,21,17,16,17,17,18,17,18,17,16,28,26,23,28,31,31,32,34,31,30,29,24,21,19,18,19,15,17,20,19,16,16,28,25,24,31,34,36,37,38,37,35,33,30,26,21,20,20,18,17,17,18,17,16,28,26,26,32,36,38,41,42,43,42,38,34,30,25,19,20,17,13,15,16,16,16,30,26,28,33,36,40,45,47,48,47,43,37,34,29,23,20,17,15,14,16,16,16,32,29,28,32,37,42,48,51,53,51,48,43,37,32,27,23,22,21,20,16,15,14,35,33,29,32,37,43,50,54,58,55,51,48,44,40,33,28,25,21,19,18,15,15,39,37,33,33,35,43,48,54,58,59,57,54,50,44,38,29,24,21,22,18,16,15,42,39,35,33,36,42,48,55,58,61,61,60,53,45,36,28,23,22,20,19,16,16,44,41,39,36,39,44,50,56,59,61,61,58,54,46,35,27,23,21,18,18,16,15,47,45,42,39,40,45,51,55,57,58,58,58,54,45,34,26,21,18,18,17,15,15,48,45,43,39,42,45,50,54,57,61,61,56,51,40,31,25,23,19,18,16,14,14,45,43,41,39,41,43,46,50,56,60,59,54,45,36,27,24,20,20,19,19,17,17,45,43,42,41,42,43,45,49,54,56,55,49,42,34,26,23,19,19,20,20,20,20,45,43,43,43,42,44,46,49,51,51,49,45,36,30,25,23,20,22,22,20,20,20,44,43,43,45,43,43,45,45,45,44,43,41,35,27,24,22,19,22,22,22,22,22,46,44,46,48,45,45,42,40,40,39,38,36,31,28,23,22,20,23,23,23,23,23,50,46,49,48,44,41,42,41,37,35,34,34,32,29,26,23,22,21,23,24,24,24,51,47,49,48,43,40,43,42,38,35,34,33,31,29,27,24,23,21,23,24,25,25],
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
