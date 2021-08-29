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
        texture=ImageTexture(url=['../../images/5/newport10-23.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.51879708887511,-71.24923386681724,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[58,57,57,55,54,51,49,45,44,42,38,36,34,32,29,27,24,22,19,17,16,16,17,56,56,55,56,54,51,49,46,44,42,39,36,35,33,30,27,25,22,20,18,17,17,17,56,57,56,56,56,52,49,47,45,43,39,37,35,33,31,28,25,23,20,18,17,17,17,58,58,55,54,54,51,49,47,45,43,40,37,36,34,32,29,26,23,21,19,17,17,17,58,58,55,54,54,52,51,49,45,43,40,38,37,35,32,30,27,24,22,20,18,17,17,59,57,55,53,52,51,49,48,45,44,41,39,37,35,33,30,27,25,22,20,19,17,17,59,58,56,54,51,50,48,47,45,43,41,39,37,35,33,30,28,26,23,22,20,19,17,58,55,54,53,52,52,50,48,45,43,41,39,37,35,33,31,28,26,24,23,21,19,18,60,56,54,53,53,50,49,49,46,43,42,39,37,35,33,31,28,26,25,23,22,20,19,60,56,54,52,51,50,49,47,45,43,41,39,37,35,33,31,28,26,25,23,22,20,19,59,55,53,51,49,50,50,48,45,43,41,40,38,36,34,31,28,26,25,23,22,21,20,59,57,54,52,51,50,48,47,45,42,41,39,38,36,34,31,28,27,25,23,22,21,20,56,55,52,50,49,48,46,45,45,42,41,39,37,35,33,31,29,27,26,24,23,22,21,54,52,51,49,47,47,45,44,44,42,41,39,37,35,33,32,30,28,26,25,23,22,21,54,52,50,49,48,48,47,45,44,42,41,39,38,36,34,32,30,28,27,25,23,22,21,53,52,50,49,48,47,46,45,45,43,42,40,39,36,34,32,30,28,27,25,23,22,21,51,51,50,49,47,47,46,45,44,43,42,41,39,37,34,32,31,29,27,25,24,22,21,50,51,52,50,48,47,46,44,43,42,41,40,39,37,35,33,31,29,27,26,24,23,22,50,50,51,51,49,47,45,43,42,41,41,39,38,37,35,33,32,30,28,26,25,23,22,50,50,50,49,47,45,44,43,41,41,41,39,38,36,35,34,33,30,29,27,25,24,22,50,49,47,46,46,44,43,43,42,41,40,39,38,36,35,34,33,31,29,28,25,24,23,48,47,47,47,47,44,42,41,40,40,40,39,37,37,35,34,33,31,29,28,26,25,24,48,47,47,48,48,45,42,40,40,40,40,39,37,37,35,34,33,32,30,28,27,25,24],
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
