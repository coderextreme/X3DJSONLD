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
        texture=ImageTexture(url=['../../images/5/newport31-31.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.68828510220285,-71.18466700459715,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[16,18,19,21,22,24,27,29,32,34,36,38,40,43,47,51,54,55,56,57,57,58,57,16,18,19,21,23,25,27,29,30,33,35,36,38,40,44,48,52,53,54,55,56,56,56,16,18,19,22,23,25,27,28,29,32,33,34,35,37,41,44,47,50,52,54,54,55,55,16,17,19,21,23,25,27,28,29,30,33,34,34,36,40,42,45,47,49,52,53,54,55,15,17,18,20,23,25,26,28,29,30,32,33,34,36,39,41,43,45,47,49,51,54,54,16,17,18,19,22,24,26,27,28,29,31,32,34,36,38,40,42,44,46,47,50,52,54,16,17,18,19,20,22,24,27,29,30,30,31,32,34,37,39,41,43,44,46,48,50,52,16,17,18,19,20,22,25,28,29,30,30,31,32,33,36,38,40,42,43,45,46,48,49,15,17,18,19,20,21,24,27,28,29,30,31,31,33,35,37,39,41,42,44,45,46,47,14,16,18,18,19,21,23,26,27,28,29,29,30,32,34,36,38,40,42,43,45,46,46,13,15,17,18,18,20,22,24,26,27,27,28,29,31,33,35,37,39,41,43,44,45,46,12,14,15,16,18,19,20,22,23,25,26,28,29,30,32,34,36,38,41,42,43,44,45,9,12,14,15,16,18,20,21,22,24,26,27,28,30,31,33,35,37,40,41,42,43,44,7,9,12,14,15,17,19,20,21,23,24,26,27,29,30,32,34,36,39,40,41,42,43,6,7,9,12,14,16,18,19,20,21,23,25,26,28,29,31,32,35,37,39,40,41,41,6,7,8,10,13,15,17,18,19,20,22,23,24,26,28,30,31,33,35,37,38,39,40,5,6,8,10,13,15,16,17,18,18,20,21,23,25,27,29,30,33,35,36,37,38,39,4,5,7,10,12,13,14,15,16,17,18,19,21,23,26,28,30,32,34,36,37,38,38,3,4,6,8,9,10,12,13,13,14,16,17,19,21,24,27,29,31,34,35,37,38,38,2,3,4,6,7,8,9,10,10,11,12,15,17,19,22,25,28,30,32,34,35,37,37,1,1,3,4,5,6,6,7,8,10,11,14,15,16,20,23,26,28,30,32,33,35,35,1,1,1,2,3,4,4,5,6,9,11,12,14,16,18,20,22,25,29,31,32,33,34,1,1,1,1,2,3,4,4,5,7,10,11,13,16,17,19,21,24,28,30,31,32,33],
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
