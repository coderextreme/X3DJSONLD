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
        texture=ImageTexture(url=['../../images/5/newport16-19.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.56722223554018,-71.28151729792728,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[56,53,49,45,41,34,32,32,32,32,32,32,32,34,37,39,40,41,42,43,44,46,49,55,51,48,44,41,36,32,32,32,32,32,32,32,32,33,35,37,39,41,41,42,42,44,55,51,47,44,42,37,32,32,32,32,32,32,32,32,32,32,33,35,37,39,40,41,42,59,55,48,44,43,37,32,32,32,32,32,32,32,32,32,32,32,32,33,34,37,39,40,58,57,51,46,44,37,32,32,32,32,32,32,32,32,32,32,32,32,32,32,33,34,38,53,53,50,47,38,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,34,49,48,48,47,40,34,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,49,47,45,45,42,38,36,35,33,32,32,32,32,32,32,32,32,32,32,32,32,32,32,49,47,43,41,39,37,35,34,35,38,33,32,32,32,32,32,32,32,32,32,32,32,32,51,50,45,40,39,37,34,32,31,31,35,34,34,33,32,32,32,32,32,32,32,32,32,50,49,46,41,40,37,33,30,29,27,28,30,35,32,32,32,32,32,32,32,32,32,32,46,46,45,41,40,38,34,31,31,27,24,26,28,33,32,32,32,32,32,32,32,32,32,43,43,43,41,40,39,35,33,31,28,25,25,25,28,32,32,32,32,32,32,32,32,32,41,41,40,39,39,38,36,32,29,27,25,27,26,27,29,32,32,32,32,32,32,32,32,40,40,38,36,35,34,34,32,31,29,27,29,28,27,27,30,33,32,32,32,32,32,32,40,40,38,36,33,32,30,29,32,33,31,30,29,29,26,29,32,33,32,32,32,32,32,40,39,37,35,32,29,29,30,32,33,34,30,28,27,28,29,31,35,34,33,32,32,32,37,35,35,31,28,27,30,33,35,36,34,30,28,27,28,29,30,32,36,36,32,32,32,35,33,32,28,24,26,30,34,35,34,32,32,32,30,28,30,30,30,34,36,33,32,32,32,32,30,27,26,28,31,31,32,34,34,35,36,35,33,32,32,33,34,36,35,32,32,29,25,24,26,30,33,34,34,34,34,36,36,37,37,37,36,35,35,34,35,36,35,33,21,19,22,27,33,33,35,37,35,35,36,38,37,37,37,36,35,35,35,36,37,37,40,14,15,22,28,33,33,35,37,37,37,38,39,39,39,38,37,36,35,36,38,38,38,42],
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
