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
        texture=ImageTexture(url=['../../images/5/newport29-26.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.81501095577192,-71.21960164167137,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,24,31,38,39,39,39,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,27,32,37,38,37,37,23,24,23,22,22,23,23,22,22,22,22,22,22,22,22,22,26,32,36,36,35,35,25,25,25,24,25,26,24,23,22,22,22,22,22,22,22,22,25,31,34,32,32,33,26,26,25,26,26,27,25,24,22,22,22,22,22,22,22,22,25,29,32,30,30,31,27,28,28,29,29,29,26,24,22,22,22,22,22,22,22,22,25,27,28,28,29,29,27,30,31,32,33,30,27,25,23,22,22,22,22,22,22,22,23,25,26,28,28,29,26,30,33,36,36,32,29,27,24,22,22,22,22,22,22,22,25,27,27,28,28,29,28,30,33,34,32,30,28,26,25,24,24,23,22,22,22,23,26,27,28,28,28,29,30,31,35,34,30,28,27,26,25,25,24,23,22,22,22,24,27,28,28,29,29,29,26,31,34,32,30,29,27,26,25,24,23,22,22,22,22,26,28,30,30,28,30,31,27,33,35,33,31,30,30,29,26,23,25,27,26,23,23,24,26,26,28,29,31,31,30,35,36,32,32,30,28,28,26,25,26,27,28,27,27,27,28,27,28,29,31,32,32,36,35,34,37,36,30,28,25,26,27,28,26,26,27,29,29,29,29,30,31,32,34,34,32,31,31,31,31,29,26,26,30,30,30,28,28,28,28,28,29,31,33,34,33,33,29,29,29,30,27,25,26,26,29,30,30,29,29,28,28,30,32,32,31,32,32,30,29,29,29,31,29,29,30,30,30,31,31,31,30,29,28,30,35,36,36,36,30,29,29,29,29,29,29,29,29,29,32,33,32,32,31,28,28,34,38,39,39,38,29,29,29,29,29,29,29,29,29,29,31,33,34,35,31,29,31,37,42,43,43,42,29,29,29,29,29,29,29,29,29,29,29,32,32,32,30,30,34,39,43,44,44,44,30,29,29,29,29,29,29,29,29,29,29,30,30,31,31,32,36,41,44,46,46,46,27,28,29,29,29,29,29,29,29,29,29,30,30,31,31,32,34,40,46,48,48,48,25,27,29,32,32,30,30,29,29,29,29,30,30,31,31,32,33,38,47,50,50,50,25,26,29,31,32,31,30,29,29,29,30,30,30,31,31,32,33,38,47,51,50,50],
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
