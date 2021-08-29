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
        texture=ImageTexture(url=['../../images/5/newport30-27.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.19761628762797,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[50,50,49,48,45,44,45,44,44,45,45,45,45,45,41,39,35,32,31,30,31,31,53,52,51,47,46,45,44,43,44,45,45,46,46,43,40,38,36,33,32,31,32,32,56,55,52,47,46,45,45,44,43,43,43,45,45,42,40,38,35,33,32,33,33,32,57,55,51,47,46,46,45,44,43,43,43,46,44,43,42,40,37,35,34,34,33,33,59,57,52,47,47,47,46,45,45,44,45,48,47,45,45,43,39,37,35,36,34,34,60,57,52,50,49,48,47,46,46,46,47,46,46,44,42,41,38,38,36,36,35,34,60,56,51,51,50,49,48,48,47,46,47,48,47,43,41,41,40,40,38,40,35,35,57,54,50,50,49,49,48,48,47,46,47,48,46,46,45,43,42,42,42,40,37,36,54,52,50,50,49,49,48,48,46,44,45,46,45,44,44,43,43,43,42,40,38,38,51,51,50,49,49,49,48,47,45,43,45,45,43,40,41,41,42,44,45,41,39,40,46,49,50,49,49,49,50,51,45,42,45,44,43,41,40,41,42,44,44,41,40,40,49,51,51,48,48,50,54,53,46,41,40,39,41,40,40,40,41,42,41,40,39,39,49,51,49,47,48,50,54,53,46,43,40,37,37,38,38,39,39,40,40,40,39,39,45,49,47,47,47,49,51,47,42,40,38,34,34,38,39,39,37,39,40,38,37,37,44,46,46,46,46,48,48,43,40,38,35,34,35,38,38,38,35,35,35,36,35,35,44,45,45,46,46,48,47,42,39,37,35,34,33,35,36,34,33,33,33,32,32,32,42,44,45,45,45,47,44,40,37,36,35,34,33,32,32,32,32,32,31,31,31,31,42,43,44,44,44,46,44,40,37,35,34,34,34,33,32,32,32,31,31,32,32,32,42,42,43,43,44,45,45,43,40,37,37,37,36,34,34,34,34,33,33,33,33,33,41,42,43,43,44,44,44,44,43,41,41,41,38,35,34,34,39,35,34,34,35,35,41,42,42,43,43,43,43,43,42,43,42,42,39,36,35,36,37,35,35,36,36,36,40,41,42,42,43,43,43,43,42,41,42,42,41,38,38,38,37,35,39,43,42,42,39,40,41,42,42,43,44,44,41,40,39,40,40,40,39,38,37,38,44,45,47,47,39,40,41,42,42,42,44,44,42,40,38,39,39,40,39,38,37,38,44,45,47,47],
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
