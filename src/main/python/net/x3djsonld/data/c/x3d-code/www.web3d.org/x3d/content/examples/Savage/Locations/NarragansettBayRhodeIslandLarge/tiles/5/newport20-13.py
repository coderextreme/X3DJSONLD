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
        texture=ImageTexture(url=['../../images/5/newport20-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.50541124423569,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[61,57,56,49,43,37,35,32,26,25,25,25,27,30,27,26,28,28,26,26,24,23,64,58,53,46,42,37,38,35,28,25,22,24,24,22,23,28,26,26,27,25,24,24,59,55,49,45,41,39,36,35,29,29,25,26,21,22,21,25,27,25,25,26,23,22,52,50,47,46,40,39,35,31,30,35,29,26,23,21,20,14,22,23,24,21,21,21,48,47,44,44,39,37,33,30,31,33,34,22,19,21,16,20,22,23,23,24,24,23,48,46,43,40,39,37,30,29,29,28,29,24,20,20,17,23,22,25,27,23,20,21,51,45,44,37,37,34,34,33,30,24,23,24,22,19,20,23,25,25,24,22,22,22,53,48,43,38,38,37,38,37,33,24,21,24,24,18,23,21,25,25,27,26,22,22,49,50,47,43,42,41,41,38,35,29,23,25,20,18,22,22,25,25,24,25,25,24,56,52,45,45,43,43,40,37,35,30,26,29,20,19,18,23,24,25,26,26,23,23,56,54,49,44,42,40,40,36,33,32,31,25,22,20,17,16,21,22,21,27,24,24,56,49,49,46,43,40,38,35,34,33,31,22,19,20,18,15,16,20,21,22,26,26,58,50,47,44,40,38,39,39,36,36,29,20,20,22,20,20,15,15,20,21,21,21,57,51,47,44,42,41,41,42,41,40,33,23,21,21,21,18,15,19,14,15,20,20,56,48,46,43,44,46,46,48,44,37,34,28,24,21,22,19,16,12,18,17,18,18,57,52,47,47,47,47,49,51,48,40,37,34,30,24,20,16,18,14,16,21,23,23,57,53,50,47,49,50,54,54,53,49,41,35,28,18,23,19,23,19,19,21,19,20,62,55,49,48,50,55,60,63,61,52,42,36,28,21,20,22,22,24,20,19,20,20,63,57,52,52,52,57,61,61,59,50,43,36,29,24,23,20,21,25,25,24,21,22,63,58,55,55,54,56,60,58,55,49,43,38,34,27,27,23,23,23,19,23,23,22,62,60,58,59,58,61,60,57,52,48,43,41,37,33,28,29,19,21,19,22,28,28,64,62,60,61,63,65,62,62,55,47,44,43,38,33,32,31,21,17,19,21,30,31,65,64,66,70,71,70,64,60,56,48,44,44,40,41,35,28,21,17,17,18,26,28,65,64,67,71,72,71,64,59,55,48,45,42,41,42,36,28,22,17,16,17,25,27],
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
