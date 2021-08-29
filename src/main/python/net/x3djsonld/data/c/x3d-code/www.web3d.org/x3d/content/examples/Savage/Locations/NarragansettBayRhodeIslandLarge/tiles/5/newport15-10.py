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
        texture=ImageTexture(url=['../../images/5/newport15-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47634988941996,-71.57136730636591,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[44,46,43,34,30,29,30,32,33,32,33,32,31,32,32,30,30,29,29,32,31,30,44,45,41,34,31,30,30,28,30,32,32,34,32,31,33,31,30,29,29,30,30,30,41,43,39,33,30,29,29,28,28,30,30,30,29,29,29,29,29,30,33,31,29,29,37,38,35,32,31,30,30,31,30,30,30,30,30,31,31,31,30,29,30,30,30,29,32,34,33,31,29,28,29,30,30,30,30,30,30,30,29,29,28,27,29,29,29,29,31,33,32,31,31,30,31,32,31,31,31,31,31,31,30,30,30,29,26,30,30,31,32,31,31,30,29,30,30,31,30,30,31,31,30,29,29,29,29,29,27,28,30,30,30,32,32,31,31,31,31,31,32,33,32,32,30,31,30,31,30,30,29,26,29,29,29,29,30,30,31,31,31,30,31,32,32,31,31,30,29,30,31,32,30,27,27,28,29,29,31,31,31,31,31,31,32,32,32,32,31,30,30,30,31,32,32,30,28,28,29,31,30,31,32,32,31,31,32,32,32,31,31,31,31,32,32,31,31,30,29,28,32,33,33,32,31,33,33,33,32,33,34,34,33,33,33,34,33,32,31,32,32,31,31,32,31,30,30,32,31,30,32,33,33,33,32,32,32,32,32,31,32,32,33,33,31,31,31,31,31,31,31,31,31,30,30,30,31,31,31,30,32,32,32,33,32,32,31,31,30,31,31,32,32,31,31,31,30,29,30,32,31,31,31,31,31,31,31,32,32,32,33,34,33,34,34,34,34,33,33,33,31,32,33,34,33,33,32,32,32,33,33,33,33,34,33,34,34,34,33,33,32,31,30,32,33,34,34,33,32,32,31,31,34,34,34,34,34,34,33,33,33,33,32,32,30,33,33,33,33,33,33,33,32,32,34,34,34,35,35,35,34,33,33,32,32,32,32,33,34,33,32,32,33,33,33,33,37,36,35,35,33,36,35,34,32,32,32,32,34,36,36,35,33,33,34,34,34,34,37,35,35,35,35,36,37,35,34,33,33,34,38,39,40,41,39,35,35,35,34,34,35,35,35,36,36,36,37,36,35,35,34,37,43,44,45,48,47,41,38,34,32,32,36,35,35,35,36,36,36,36,36,37,34,40,45,50,52,53,51,48,45,38,35,35,36,35,35,35,36,37,37,36,36,37,34,40,46,51,54,54,52,49,47,40,36,36],
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
