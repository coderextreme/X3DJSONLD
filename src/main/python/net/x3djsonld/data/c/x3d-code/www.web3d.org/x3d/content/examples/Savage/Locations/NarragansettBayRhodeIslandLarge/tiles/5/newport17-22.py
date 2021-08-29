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
        texture=ImageTexture(url=['../../images/5/newport17-22.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52473004175595,-71.30754305784501,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[5,12,9,14,20,23,28,34,32,29,32,27,23,24,19,21,23,33,37,34,38,38,5,15,7,13,18,25,31,33,34,32,31,29,25,21,19,20,26,28,34,40,41,42,0,7,12,12,21,26,33,33,34,30,28,27,24,19,19,21,23,27,36,41,49,48,7,15,12,15,22,31,34,34,31,28,29,23,24,25,22,22,25,29,35,40,44,45,0,9,16,18,25,31,35,33,34,31,26,25,24,23,24,27,28,34,35,42,43,44,8,8,8,17,29,32,36,35,32,32,30,28,27,25,27,29,28,34,39,42,45,45,9,12,18,25,26,30,31,32,35,38,36,28,29,28,29,30,33,33,36,39,44,45,7,15,22,28,31,29,30,31,29,29,33,31,30,30,29,34,36,37,38,41,43,44,18,22,28,32,30,29,27,32,26,25,27,28,27,32,37,35,36,37,38,40,41,42,20,33,32,31,30,26,26,28,32,29,27,30,29,33,35,40,40,38,40,39,38,37,28,33,35,33,33,28,24,21,23,26,31,36,35,36,42,46,44,40,39,37,38,39,32,35,38,36,34,28,23,20,22,26,36,43,46,41,41,38,44,46,40,40,38,38,30,38,37,38,30,25,21,20,25,30,34,39,45,49,49,46,48,48,43,41,38,38,24,31,31,32,28,22,18,21,25,31,37,41,49,48,47,50,48,46,46,43,41,41,16,28,27,26,22,11,15,19,23,30,36,41,53,50,52,55,51,49,47,43,42,41,6,16,15,19,15,15,15,20,26,31,36,43,49,49,49,56,54,51,45,44,47,46,0,2,15,11,13,17,19,21,26,30,38,44,47,53,51,49,52,51,46,46,47,47,0,0,3,8,10,18,20,24,27,34,41,46,51,51,51,53,51,52,49,47,48,48,0,0,0,7,12,18,23,26,30,34,45,53,55,53,51,50,48,47,49,46,46,46,0,0,0,0,12,17,23,25,33,40,47,53,55,53,51,50,46,47,51,48,46,46,0,0,0,0,12,17,20,25,33,43,52,53,53,48,48,47,45,48,49,52,50,49,0,0,0,7,13,15,21,25,32,39,51,53,55,48,45,45,46,49,51,50,49,49,0,2,9,9,12,17,22,25,29,36,46,53,49,50,48,45,50,52,54,50,52,52,0,6,9,10,12,17,22,24,29,36,46,52,50,48,50,45,50,53,53,49,52,52],
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
