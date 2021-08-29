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
        texture=ImageTexture(url=['../../images/5/newport22-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.615647382205246,-71.32187158681484,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[26,27,30,30,29,29,31,35,38,37,36,38,39,40,40,40,42,41,37,37,39,41,42,27,28,29,30,30,30,31,33,36,37,37,36,36,38,39,39,39,39,37,39,41,42,44,28,28,29,29,30,32,32,33,34,35,37,36,36,37,37,36,36,37,38,39,40,43,45,29,30,30,29,31,32,31,31,33,34,36,37,37,37,36,36,36,37,38,37,37,40,44,28,30,30,30,31,32,31,30,32,35,36,37,37,37,37,36,37,40,41,37,37,39,43,28,29,29,29,29,32,33,32,33,37,38,37,37,38,37,37,37,39,39,39,40,40,41,29,30,31,30,31,32,32,32,32,35,35,35,35,37,37,37,37,38,38,39,40,40,42,30,32,34,33,33,31,31,31,31,31,32,33,34,36,36,35,36,36,38,41,39,40,44,33,32,32,33,33,32,31,31,31,31,31,32,33,35,35,35,36,36,37,38,38,39,41,33,32,30,31,31,31,30,31,33,32,32,31,31,32,34,36,38,38,36,36,37,38,37,33,31,29,31,31,31,33,32,33,34,34,33,31,32,35,37,39,38,35,34,35,36,37,33,31,32,33,33,33,34,34,32,32,34,35,35,34,35,35,34,33,34,34,35,36,38,32,33,33,35,34,32,32,32,31,30,33,34,34,34,35,33,31,31,34,36,37,37,37,31,32,32,34,34,32,32,32,32,32,33,33,35,35,35,34,32,31,33,35,36,37,36,31,30,30,30,32,33,34,34,34,33,32,33,34,34,34,34,34,33,33,34,35,37,36,30,32,33,33,32,33,33,33,32,31,31,32,32,33,32,33,33,34,34,34,36,39,38,32,33,35,33,31,32,33,35,33,33,32,32,32,33,33,32,33,35,35,34,35,37,36,32,33,32,32,32,32,34,36,35,35,33,32,32,34,33,33,34,35,33,33,34,33,33,28,30,32,33,33,33,33,32,32,34,33,32,32,29,29,32,33,34,33,33,34,34,34,25,28,30,32,32,33,33,32,32,32,32,33,32,31,31,32,32,33,34,34,33,35,37,24,25,29,30,33,35,36,35,32,32,33,33,33,32,33,34,33,31,32,33,32,34,39,24,26,29,31,33,34,35,34,33,33,34,35,35,34,32,33,33,32,31,32,32,33,36,25,26,29,31,33,33,35,34,33,33,33,34,34,33,31,32,34,31,31,32,32,32,36],
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
