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
        texture=ImageTexture(url=['../../images/5/newport15-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47634988941996,-71.68129407658296,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[42,48,54,53,52,51,46,40,33,29,25,25,25,21,20,24,25,24,28,25,28,29,43,49,55,55,53,49,44,37,30,28,30,29,27,25,21,19,24,26,29,28,25,26,43,48,52,54,50,46,41,33,31,31,29,27,26,26,22,20,23,27,32,28,26,25,41,48,50,48,43,40,34,32,30,27,24,26,27,28,27,20,21,24,26,27,29,29,39,48,47,42,37,33,29,29,29,29,25,24,23,21,21,20,21,23,24,26,31,32,37,44,38,32,31,31,31,31,29,24,24,26,25,24,23,22,19,25,23,27,33,34,31,31,30,31,31,29,27,29,29,27,24,23,24,23,22,21,21,27,25,30,34,34,27,28,28,30,31,27,28,29,30,30,24,24,30,28,23,21,22,28,32,33,34,34,31,30,30,31,31,26,26,28,28,28,27,25,29,35,29,21,21,27,31,36,35,34,31,31,26,25,28,27,26,25,28,26,23,22,25,31,32,32,22,25,31,37,38,38,28,28,31,26,27,26,25,25,27,29,24,22,25,25,26,32,28,30,29,34,38,40,29,29,28,26,25,27,27,28,29,30,34,26,25,24,26,28,30,27,30,38,39,41,32,34,30,26,24,26,27,28,28,31,30,26,25,26,26,24,32,30,37,40,40,40,36,36,34,28,27,25,27,29,31,30,31,31,28,28,23,26,32,34,31,38,42,43,36,39,39,32,28,27,26,26,32,34,33,33,32,29,23,27,31,34,33,38,43,43,38,43,43,38,28,26,26,26,33,35,35,34,34,32,27,25,28,33,37,38,40,42,35,41,50,45,31,26,26,26,32,33,33,33,32,32,28,24,30,32,36,37,40,42,35,42,48,48,35,26,26,27,32,33,36,36,33,34,33,28,32,33,33,35,38,39,38,41,43,36,29,26,26,28,32,34,36,35,35,34,36,34,32,32,34,34,35,35,41,42,33,31,26,26,26,26,27,30,34,36,37,36,33,31,33,35,36,35,34,36,36,39,34,34,31,26,26,26,28,31,32,33,35,34,33,34,31,31,34,33,34,35,36,35,35,33,33,27,27,33,34,32,34,35,35,37,39,36,32,30,33,32,35,36,38,34,33,31,31,28,30,34,37,37,37,38,39,39,41,37,35,35,33,36,39,40,38,35,33,31,31,29,31,34,38,38,37,39,40,39,41,38,36,35,34,36,39,40],
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
