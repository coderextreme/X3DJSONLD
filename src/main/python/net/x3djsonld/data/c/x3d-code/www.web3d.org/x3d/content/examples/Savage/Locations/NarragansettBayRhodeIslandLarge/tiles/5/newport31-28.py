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
        texture=ImageTexture(url=['../../images/5/newport31-28.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.86339110810791,-71.17563093358456,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[47,48,45,43,38,34,29,29,30,30,28,25,25,23,23,23,24,27,30,29,27,27,50,50,47,44,41,36,35,32,35,32,30,26,26,23,24,25,25,28,30,29,28,28,51,51,47,44,41,36,35,38,40,34,30,26,24,22,24,27,27,30,31,30,29,28,52,51,49,45,41,38,36,38,37,36,33,27,24,22,22,24,27,30,31,30,29,28,50,50,48,44,41,39,36,34,33,38,36,30,24,22,22,23,28,30,31,29,28,28,43,44,44,42,40,38,37,33,33,37,32,30,24,23,22,23,29,32,32,30,29,29,40,41,40,39,37,37,36,33,34,32,30,29,24,22,22,26,30,33,33,31,31,31,38,38,38,37,35,35,34,32,35,34,30,26,23,22,23,28,32,33,32,31,31,31,36,36,35,35,34,33,31,30,29,31,31,27,23,23,27,30,33,34,32,31,32,32,33,32,32,31,30,30,30,30,26,28,28,26,23,27,32,32,34,34,33,32,33,33,32,31,31,30,29,28,29,28,27,23,22,23,21,28,34,36,36,35,34,34,33,33,32,31,31,30,29,28,30,27,25,22,20,21,22,25,31,36,36,35,34,34,33,33,30,29,30,30,29,30,31,27,25,22,20,21,22,24,30,36,36,35,33,32,32,32,30,29,29,29,29,32,32,27,24,22,21,22,23,24,29,36,36,34,31,31,30,29,31,30,30,29,28,33,30,26,23,22,23,22,23,26,34,36,36,33,30,29,29,29,31,29,29,29,29,33,29,26,24,23,23,24,24,27,35,37,36,33,30,29,29,28,38,31,28,28,30,33,29,26,24,23,27,26,26,32,36,36,36,34,31,30,30,30,33,34,30,28,31,33,28,25,23,21,26,32,31,33,34,35,35,33,32,31,32,32,41,33,29,28,32,31,29,26,23,24,23,27,29,33,34,34,33,32,32,32,33,33,41,37,31,29,31,29,27,26,24,25,24,25,28,30,32,33,32,32,31,32,32,32,42,36,30,29,29,29,28,27,25,24,27,27,27,29,29,30,30,31,31,32,32,32,43,36,31,29,29,28,27,27,26,26,26,28,29,28,29,30,30,30,31,31,31,31,41,35,31,29,29,28,27,27,26,26,27,29,29,29,29,30,31,31,31,31,32,32,41,35,31,29,28,28,27,27,26,26,27,29,29,29,29,30,31,31,31,32,32,32],
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
