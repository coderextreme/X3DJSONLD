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
        texture=ImageTexture(url=['../../images/5/newport21-23.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.607576524427735,-71.24923386681724,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[31,31,31,32,33,32,32,32,32,35,36,37,37,37,37,37,35,34,31,27,24,21,18,33,33,33,32,32,33,33,34,35,37,37,37,38,38,38,38,36,35,33,29,25,22,20,35,35,34,32,32,34,36,36,38,40,39,39,39,39,39,39,38,36,33,29,25,23,21,36,36,34,33,35,36,38,38,39,41,41,40,40,41,40,40,38,35,33,29,25,23,21,41,40,38,37,39,42,41,40,40,42,42,42,42,42,41,40,38,35,32,29,25,23,21,43,42,43,43,43,43,42,42,43,44,43,43,44,43,42,40,37,34,31,28,25,23,21,45,45,46,47,47,45,42,44,45,45,45,45,45,43,41,39,36,33,30,27,25,23,21,47,47,47,47,48,46,46,46,46,45,45,45,45,43,40,38,35,33,30,28,26,24,22,48,49,48,48,48,48,48,48,48,46,45,45,43,42,40,38,35,33,31,29,26,24,22,48,47,47,49,48,48,49,50,49,48,46,45,43,41,39,37,35,33,31,29,26,24,23,49,49,50,51,49,49,51,51,50,47,45,44,43,41,39,37,35,33,31,29,27,25,23,49,50,52,50,50,50,51,51,48,44,43,42,41,40,38,37,35,33,31,29,27,25,24,49,51,52,50,49,49,51,50,47,44,42,41,40,39,38,36,34,32,30,29,27,25,25,51,51,52,51,49,49,49,49,49,46,43,41,40,39,38,36,34,32,30,28,27,26,26,52,50,49,50,51,50,47,47,48,46,44,42,41,39,38,36,34,32,30,28,28,27,26,50,49,47,47,49,48,46,47,46,45,44,43,41,40,38,36,34,32,30,29,28,27,26,52,50,48,47,47,47,46,46,45,45,44,43,42,40,38,36,34,33,31,29,28,28,27,51,49,49,49,46,46,47,44,44,44,44,43,42,40,39,37,35,33,31,30,29,29,28,50,48,48,47,45,45,46,45,44,44,43,43,42,41,39,37,35,33,32,31,30,29,29,48,47,47,46,44,45,44,44,44,44,43,43,42,41,39,37,36,34,32,31,31,30,30,47,47,47,46,46,46,44,42,42,43,43,43,42,41,39,38,36,34,33,32,31,31,31,45,47,48,46,46,45,44,43,43,43,43,44,43,42,40,39,37,35,34,32,31,31,32,45,47,48,45,44,44,45,44,44,44,44,43,44,43,41,39,37,35,34,33,32,32,33],
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
