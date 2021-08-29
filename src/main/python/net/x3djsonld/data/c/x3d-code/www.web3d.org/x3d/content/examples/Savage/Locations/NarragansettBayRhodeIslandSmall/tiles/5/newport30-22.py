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
        texture=ImageTexture(url=['../../images/5/newport30-22.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.680214244425336,-71.25730472459475,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[26,27,28,29,28,29,31,31,30,32,31,30,29,28,31,29,26,25,23,22,21,20,20,26,26,28,28,29,32,34,33,33,33,33,33,31,30,34,34,31,29,26,24,22,21,21,26,25,26,28,30,33,35,37,39,39,39,39,38,37,36,35,34,33,29,25,25,25,24,27,28,29,30,33,36,37,39,43,43,41,40,40,40,39,37,36,34,30,26,24,22,21,28,30,33,35,35,36,37,39,41,42,43,42,42,42,41,39,37,34,31,27,25,22,21,29,31,34,37,36,35,38,40,41,43,45,47,46,42,41,41,38,36,32,30,28,24,22,30,32,34,35,36,36,39,43,44,45,47,47,47,45,44,43,40,36,32,30,28,26,25,33,34,35,36,36,37,40,43,45,47,48,48,48,47,46,43,40,37,34,31,28,27,27,33,36,36,36,37,37,39,43,44,46,48,48,49,47,45,42,39,37,35,31,28,27,25,32,37,37,36,35,36,40,44,45,45,47,48,48,47,45,42,39,37,35,32,29,25,24,31,33,35,36,36,37,42,44,46,47,47,48,48,47,45,43,40,38,35,32,30,28,26,31,33,34,37,37,37,41,44,46,45,46,47,48,47,45,43,41,38,35,31,30,31,30,32,36,36,37,38,38,40,44,43,44,45,46,48,48,47,43,41,38,34,31,30,30,29,34,36,37,37,36,38,40,44,44,46,47,48,48,46,44,43,41,38,35,32,31,31,29,36,38,41,39,38,39,41,44,47,48,48,47,46,45,44,42,40,38,36,33,32,32,30,38,38,41,41,40,41,43,46,52,52,50,47,44,43,42,41,39,38,36,34,33,32,30,38,38,41,42,41,43,43,45,48,49,48,46,46,44,42,42,39,38,38,38,36,36,33,39,39,43,43,43,44,46,48,48,48,48,47,46,45,43,42,40,39,40,40,38,37,35,40,40,41,42,43,45,50,53,52,50,48,47,46,46,45,42,42,41,42,39,38,37,34,42,43,41,44,47,51,54,55,54,51,48,46,48,47,47,44,43,43,42,42,40,37,34,45,44,43,45,46,51,51,51,50,50,50,49,48,48,47,44,44,43,43,45,43,40,37,47,47,47,47,45,46,47,47,47,50,50,49,47,47,45,44,44,44,44,45,44,43,41,47,48,49,49,48,47,46,48,49,49,50,49,48,47,45,44,45,45,43,44,42,41,41],
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
