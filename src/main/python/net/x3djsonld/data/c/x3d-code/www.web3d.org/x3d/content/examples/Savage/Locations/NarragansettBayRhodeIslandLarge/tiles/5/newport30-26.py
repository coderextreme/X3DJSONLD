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
        texture=ImageTexture(url=['../../images/5/newport30-26.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.21960164167137,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[25,26,29,31,32,31,30,29,29,29,30,30,30,31,31,32,33,38,47,51,50,50,23,26,28,29,29,30,30,31,31,32,33,32,32,31,31,32,36,40,45,51,53,53,23,24,25,25,27,28,29,32,33,34,33,31,31,31,31,32,36,42,49,53,56,56,22,25,26,27,29,27,26,29,31,32,31,30,31,31,31,32,36,42,48,54,56,57,23,23,24,24,25,25,26,27,28,29,30,30,31,31,32,32,35,41,49,56,58,59,25,25,26,27,29,29,30,31,32,30,30,31,31,31,31,31,33,40,51,58,60,60,28,28,27,29,29,29,31,32,33,31,31,30,31,31,31,31,32,38,49,57,60,60,30,29,29,32,32,31,32,33,34,32,31,31,31,31,32,33,34,35,43,55,58,57,30,32,32,33,32,32,34,34,34,33,31,31,31,31,32,33,33,34,42,52,55,54,31,33,33,33,34,34,34,34,34,33,33,31,31,31,32,32,31,32,39,49,52,51,32,33,33,34,34,35,35,34,31,31,31,32,31,31,32,33,31,32,38,43,45,46,32,33,33,34,34,34,36,34,31,31,31,31,33,33,32,33,32,33,39,42,47,49,33,32,31,32,31,32,35,33,31,31,31,31,33,33,33,32,33,35,38,41,47,49,32,32,31,31,31,32,34,31,31,31,31,31,31,32,31,31,31,31,34,36,43,45,29,30,31,31,32,34,34,31,31,31,31,32,32,31,31,32,31,31,31,35,42,44,33,30,31,33,34,35,34,32,31,32,33,34,31,31,31,32,31,31,31,35,42,44,33,31,31,31,32,32,33,34,34,35,36,35,31,31,31,31,31,31,31,34,41,42,33,34,33,32,31,31,32,33,34,37,39,36,31,31,31,31,31,31,31,36,41,42,33,34,34,33,34,32,32,33,34,36,37,36,31,31,31,31,31,33,33,39,41,42,34,34,34,34,34,32,32,33,34,36,36,32,31,31,31,31,31,35,37,39,40,41,34,34,35,35,34,31,31,31,34,36,33,31,31,31,31,31,31,36,37,38,40,41,34,34,34,35,35,33,31,31,33,34,31,31,31,31,31,31,32,36,37,38,40,40,33,33,33,33,32,31,31,31,31,31,31,31,31,31,31,31,32,34,32,34,39,39,33,33,33,33,31,31,31,31,31,31,31,31,31,31,31,31,32,34,31,35,38,39],
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
