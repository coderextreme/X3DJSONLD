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
        texture=ImageTexture(url=['../../images/5/newport29-28.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.81501095577192,-71.17563093358456,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[25,25,25,25,26,27,28,28,29,32,31,28,33,39,39,39,36,35,34,34,34,34,25,25,25,25,26,28,28,28,29,31,29,29,35,39,40,40,39,36,34,34,34,34,25,25,25,25,28,30,27,28,29,31,27,29,36,41,40,41,40,38,35,34,34,34,25,25,25,26,29,30,26,26,32,31,28,27,36,39,40,41,40,36,35,34,34,34,25,25,25,25,29,29,25,27,33,31,26,28,37,38,39,41,38,35,34,34,34,34,25,25,25,25,25,25,25,27,31,27,25,31,36,36,39,41,39,35,34,34,34,34,25,25,25,25,25,25,25,25,25,25,25,31,35,35,40,42,40,37,34,34,36,36,25,25,25,25,25,25,25,25,26,29,26,27,31,34,39,42,40,37,34,34,37,38,25,25,25,25,25,25,25,25,28,30,30,28,29,34,39,42,40,37,34,35,39,39,27,26,25,26,26,25,25,25,30,31,30,29,29,36,40,41,39,36,35,38,40,40,27,25,25,27,25,25,25,25,31,31,31,31,33,38,39,40,38,35,37,40,41,41,26,25,25,25,25,25,25,26,31,31,31,32,35,40,41,40,38,38,41,44,43,42,27,25,25,26,25,25,25,26,30,31,32,34,36,38,39,41,40,42,44,47,44,43,25,25,25,25,25,26,26,27,30,31,33,35,37,37,37,37,39,43,47,50,45,44,25,25,25,25,25,25,25,28,29,31,34,37,36,35,34,35,39,45,50,51,47,46,25,25,25,25,25,25,26,30,31,32,36,39,35,34,34,34,42,48,53,52,48,47,27,27,27,27,26,25,27,30,31,34,39,37,34,34,34,36,44,49,54,51,47,46,29,28,28,27,26,25,26,28,31,36,38,36,34,34,34,39,47,51,54,51,47,46,26,27,26,25,25,25,28,31,33,35,39,36,34,34,34,41,48,52,54,50,45,44,26,25,25,25,25,25,27,32,31,33,37,34,34,35,35,43,49,54,54,49,43,42,27,25,25,25,25,25,26,30,31,33,36,34,34,37,38,45,51,54,54,48,42,40,28,27,25,25,25,25,28,30,31,32,35,34,37,37,40,47,52,54,52,47,40,39,31,28,25,25,25,25,27,29,31,33,34,34,39,39,42,48,53,54,51,45,41,40,31,28,25,25,25,25,28,29,31,33,34,35,39,39,43,48,53,54,50,45,41,40],
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
