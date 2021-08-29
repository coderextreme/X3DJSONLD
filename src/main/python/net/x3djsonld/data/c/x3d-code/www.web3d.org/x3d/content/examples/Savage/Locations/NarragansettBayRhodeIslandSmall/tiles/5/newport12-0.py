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
        texture=ImageTexture(url=['../../images/5/newport12-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.53493880443013,-71.4348635957,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[27,28,32,35,38,41,42,42,44,45,46,47,48,50,51,53,50,48,50,53,52,51,52,29,32,34,38,40,41,41,39,41,43,44,46,48,50,50,49,48,51,53,54,53,54,54,30,32,34,35,38,40,40,39,40,43,45,47,48,48,47,47,50,53,53,54,54,55,55,32,34,34,34,35,37,39,39,41,42,45,45,45,46,45,46,49,50,51,53,53,54,54,30,33,35,35,36,37,37,39,40,43,44,45,45,45,44,42,44,47,49,50,50,52,52,31,34,36,38,38,36,37,38,39,41,43,46,46,45,44,43,43,45,45,47,48,50,51,30,34,35,35,37,36,36,37,41,43,44,44,44,45,45,44,44,43,41,42,43,46,47,24,27,29,31,32,34,37,39,44,44,43,42,42,43,43,42,43,42,40,39,39,40,41,25,25,27,30,32,34,38,43,45,43,42,41,41,42,43,43,43,40,38,38,38,37,37,28,29,29,30,34,35,39,43,44,42,42,42,42,40,39,42,43,40,37,38,36,34,34,25,26,29,31,33,36,39,42,41,42,42,44,42,39,36,39,42,40,39,37,34,31,31,24,25,28,32,35,38,43,43,40,41,41,42,42,41,40,43,42,40,40,37,33,28,27,24,26,27,32,36,40,43,42,40,40,40,40,42,43,43,43,38,37,35,34,31,28,26,26,28,29,29,32,37,39,39,39,41,40,39,39,43,43,40,37,35,31,30,31,29,28,28,28,28,28,30,34,38,40,39,40,41,40,40,40,40,38,37,35,32,28,27,26,24,26,26,27,28,28,32,35,37,37,39,40,41,40,39,38,37,38,36,35,31,26,24,23,22,24,27,27,28,31,32,34,34,36,37,39,39,40,38,37,37,34,34,31,26,23,22,17,20,24,26,29,31,31,31,31,33,35,37,38,39,37,38,37,33,30,31,30,27,26,16,18,22,23,26,28,30,31,32,34,34,36,38,39,39,39,37,33,31,29,28,27,26,17,18,20,20,21,25,29,31,34,36,35,35,37,37,38,38,35,32,30,28,24,21,20,18,20,21,20,20,23,26,28,31,34,37,38,37,34,34,33,32,29,26,24,21,19,19,21,22,24,23,20,21,22,23,26,29,33,34,34,32,31,30,28,26,23,22,20,18,18,22,23,24,23,20,20,21,22,25,27,30,30,31,31,30,29,26,24,22,21,19,17,17],
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
