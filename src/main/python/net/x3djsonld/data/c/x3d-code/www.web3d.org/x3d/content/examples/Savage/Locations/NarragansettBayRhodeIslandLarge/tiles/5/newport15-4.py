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
        texture=ImageTexture(url=['../../images/5/newport15-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47634988941996,-71.70327943062637,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[26,27,27,31,36,45,52,53,43,38,34,35,35,29,26,26,26,26,31,33,41,42,26,27,26,32,37,47,55,50,46,44,40,36,29,30,28,28,27,26,29,36,41,43,21,25,24,34,40,48,52,51,50,44,39,33,30,30,29,29,27,26,29,36,42,43,19,21,24,37,44,53,58,58,55,47,39,28,26,27,28,28,26,27,30,35,40,41,21,24,23,34,45,51,57,57,54,48,42,34,30,29,26,26,27,28,30,31,36,39,20,22,28,33,41,48,53,56,54,51,45,35,32,29,27,28,27,30,31,31,36,37,20,21,26,33,40,46,50,54,52,46,41,40,37,32,29,33,28,29,31,31,31,31,20,20,22,27,37,45,46,49,49,41,48,53,48,33,33,39,32,27,30,31,27,27,20,20,19,24,33,38,39,46,52,49,54,53,49,42,38,40,40,31,29,29,31,31,21,22,21,23,29,38,45,50,55,57,59,59,57,48,44,43,39,34,30,32,31,31,25,23,29,31,29,38,44,52,59,64,63,60,57,54,50,48,47,43,31,28,28,28,39,26,27,35,36,40,46,54,62,62,66,67,60,55,55,53,51,46,36,28,29,29,43,32,29,45,43,48,52,55,61,67,69,65,69,60,53,53,47,43,38,32,32,32,40,29,28,39,46,52,60,66,68,72,74,70,67,61,53,49,43,36,34,32,35,36,36,28,26,34,41,48,56,66,73,76,74,73,69,60,51,46,45,41,39,34,35,36,27,27,28,34,40,49,57,65,72,78,76,75,66,59,53,51,52,47,40,39,36,38,29,28,29,32,43,53,59,66,73,77,79,74,67,61,56,54,52,51,41,42,35,35,32,28,28,30,37,50,60,69,74,76,77,76,71,68,60,58,54,51,46,44,36,35,28,27,34,33,39,49,62,68,70,69,72,73,73,71,67,65,63,55,51,45,38,38,23,28,44,46,44,52,58,63,66,63,67,69,70,69,67,65,61,58,53,47,40,41,22,31,45,56,55,54,59,60,60,60,66,69,67,65,62,62,59,56,52,45,36,36,24,36,46,51,54,51,54,56,58,58,60,64,60,58,59,60,61,57,46,39,36,36,29,31,41,46,48,47,45,48,50,52,55,55,50,51,55,57,59,50,45,39,39,38,29,31,40,45,47,46,43,46,49,52,54,53,48,49,54,57,58,49,42,38,39,38],
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
