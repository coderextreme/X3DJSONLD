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
        texture=ImageTexture(url=['../../images/5/newport9-23.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.5107262310976,-71.24923386681724,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[34,33,31,29,29,31,31,29,27,25,24,23,23,23,23,22,21,19,17,15,12,10,8,35,34,32,31,31,32,32,31,27,25,24,23,23,23,23,22,20,19,16,14,12,9,8,36,36,34,33,32,31,32,32,30,28,26,24,23,23,23,22,20,18,16,14,11,9,8,37,37,36,34,32,31,32,33,32,30,28,27,25,24,23,21,20,18,16,13,11,9,8,39,39,37,35,33,33,33,33,31,30,29,28,26,25,23,21,20,18,16,13,11,9,8,39,39,37,36,35,35,35,33,32,31,30,29,27,25,24,22,20,18,16,13,11,9,9,40,40,37,36,36,38,37,34,32,31,30,29,28,26,24,22,20,18,15,13,11,10,9,41,40,39,37,37,38,38,36,34,32,31,29,28,26,24,22,20,18,16,13,11,10,9,42,42,41,39,37,37,37,37,35,33,32,31,29,27,25,23,21,18,16,13,11,10,9,43,43,42,40,38,37,37,36,35,34,33,32,30,27,25,23,21,19,16,14,11,10,9,44,43,43,42,41,40,37,37,36,35,33,32,30,27,25,24,22,19,17,14,12,10,10,44,43,43,43,43,41,38,37,37,35,34,32,30,27,26,24,22,19,17,15,12,11,10,45,45,45,44,43,41,39,38,37,36,35,33,30,28,26,24,22,19,17,15,13,11,11,48,48,47,45,43,41,40,39,37,37,36,34,31,28,26,25,22,20,17,16,14,12,11,54,51,49,46,45,42,40,39,38,37,36,34,31,29,27,25,23,20,18,16,14,13,12,57,53,49,46,44,42,40,40,39,37,36,34,31,29,27,25,23,20,17,16,14,14,14,57,53,51,48,46,44,43,41,39,37,36,34,31,30,27,25,23,20,17,15,14,15,15,57,54,54,53,49,46,44,41,39,37,36,34,32,30,27,25,23,20,17,15,15,15,15,54,53,53,53,50,47,44,42,41,38,37,35,32,30,27,25,23,20,18,16,15,15,16,54,53,54,53,50,48,45,44,42,40,37,34,32,30,28,25,23,21,18,16,15,16,17,57,55,56,55,53,50,48,45,43,41,37,34,33,31,29,26,24,22,19,17,16,16,17,58,56,56,55,53,51,49,46,44,42,38,35,33,31,29,27,24,22,19,17,16,16,17,58,57,57,55,54,51,49,45,44,42,38,36,34,32,29,27,24,22,19,17,16,16,17],
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
