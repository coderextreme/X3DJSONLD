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
        texture=ImageTexture(url=['../../images/5/newport10-18.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.51879708887511,-71.28958815570479,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[19,22,26,25,25,26,27,28,28,28,31,32,33,33,35,36,38,40,42,42,43,45,45,21,23,27,26,24,26,27,29,29,28,30,32,34,35,36,38,40,41,42,43,45,46,47,21,25,27,25,25,27,27,30,29,29,31,34,37,39,39,39,41,41,43,44,45,47,48,26,28,27,26,26,31,30,30,30,30,32,34,35,38,41,42,42,44,45,45,47,47,47,29,31,30,28,27,30,33,31,32,33,34,34,34,37,40,43,44,46,46,47,48,48,48,28,29,29,27,27,29,31,32,33,35,35,35,37,40,41,44,45,46,47,47,48,49,50,28,30,30,27,28,29,29,32,35,35,35,37,41,43,44,45,46,47,47,49,49,49,50,28,32,33,29,29,29,28,29,32,34,35,37,40,42,44,46,45,45,46,49,49,50,50,26,30,32,30,32,31,29,31,33,35,35,37,40,42,42,43,44,44,45,48,49,51,52,27,27,30,33,34,31,30,32,34,35,37,40,41,41,42,42,42,44,47,48,49,50,50,28,27,29,33,34,34,34,35,35,36,38,41,42,41,42,44,46,47,48,48,49,50,51,29,29,30,31,32,33,36,36,36,37,41,42,43,42,44,46,48,49,49,49,49,50,51,30,31,30,30,32,32,35,35,36,38,42,43,43,43,46,48,49,50,50,50,50,51,52,33,35,33,32,32,32,35,36,37,37,40,41,41,43,45,47,48,49,50,51,52,52,52,35,36,37,37,34,33,35,38,38,38,39,40,39,39,43,46,49,49,51,53,53,52,52,31,33,34,34,34,35,37,40,41,42,41,42,41,38,43,47,50,52,54,54,51,51,50,29,31,33,33,35,37,38,39,41,42,43,42,42,42,46,48,50,53,55,55,51,51,52,29,30,32,34,36,39,39,40,42,42,42,42,43,46,48,49,50,52,52,53,53,53,53,29,30,33,35,37,39,40,42,44,44,44,45,47,48,49,50,51,50,50,51,52,52,52,29,31,33,35,37,39,41,42,45,46,46,48,50,50,50,51,53,52,50,51,52,50,50,29,32,34,37,39,40,42,44,49,49,48,49,49,49,50,52,55,53,50,51,51,50,49,29,32,35,37,39,40,42,46,51,50,49,48,49,50,52,54,54,52,51,51,52,50,49,28,32,36,38,39,40,41,45,49,48,47,48,50,52,53,54,54,52,52,52,53,51,50],
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
