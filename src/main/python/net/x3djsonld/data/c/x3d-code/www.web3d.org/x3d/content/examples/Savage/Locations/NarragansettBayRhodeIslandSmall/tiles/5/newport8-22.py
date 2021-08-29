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
        texture=ImageTexture(url=['../../images/5/newport8-22.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.50265537332009,-71.25730472459475,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[31,32,32,29,25,21,19,17,15,13,11,11,10,11,11,12,13,14,14,15,16,18,19,32,32,33,32,28,25,22,18,16,14,13,11,10,11,11,11,12,14,13,13,14,16,19,33,34,34,33,30,29,26,22,18,17,15,12,12,11,10,11,13,15,12,12,15,16,18,35,35,36,35,34,33,30,25,20,18,15,14,13,13,14,15,16,15,12,12,14,15,17,36,36,36,37,37,36,32,27,22,18,16,16,15,15,15,18,17,15,13,12,13,14,16,38,39,38,37,38,37,33,28,22,20,19,18,16,14,14,17,18,17,16,13,14,15,16,41,40,38,36,35,35,33,30,24,21,20,19,15,15,17,18,18,15,16,15,16,17,17,44,42,40,38,35,33,31,29,25,22,20,19,17,17,19,19,16,15,17,16,17,18,17,44,41,41,40,37,34,32,31,28,24,21,21,19,16,15,16,15,15,18,19,19,19,19,48,46,45,43,39,36,34,33,30,27,24,24,22,18,14,14,15,15,17,19,18,19,20,52,51,50,47,43,39,36,33,29,27,25,24,21,20,19,18,17,16,16,17,17,17,19,51,52,51,48,44,43,41,38,32,28,26,23,20,20,21,22,22,19,17,17,18,18,18,51,52,51,48,47,47,45,42,37,34,30,25,21,20,20,20,20,19,16,17,18,18,20,52,52,52,49,48,49,48,45,42,38,34,30,26,25,22,18,16,18,18,16,17,18,21,54,53,53,52,50,49,47,47,44,40,35,32,31,27,26,21,17,18,20,20,20,20,20,54,54,53,54,51,47,46,46,45,41,36,33,32,29,28,25,21,20,21,24,23,22,20,56,54,53,54,52,50,48,46,45,42,39,35,33,32,30,27,23,22,22,22,22,23,22,54,55,54,54,55,53,51,48,45,42,40,37,34,33,30,26,25,24,24,21,23,24,25,52,53,52,52,53,54,52,49,48,45,43,39,35,34,32,28,26,25,26,25,25,26,27,52,52,51,53,53,53,53,51,50,48,45,40,37,36,34,31,29,28,28,27,27,27,27,54,54,53,55,54,53,52,52,51,50,46,42,39,37,34,33,32,31,30,28,28,29,28,55,54,54,54,54,53,52,51,50,49,46,44,41,38,37,36,34,32,31,31,32,32,32,54,53,53,55,54,53,52,51,49,48,46,44,42,39,38,37,35,33,32,32,33,33,34],
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
