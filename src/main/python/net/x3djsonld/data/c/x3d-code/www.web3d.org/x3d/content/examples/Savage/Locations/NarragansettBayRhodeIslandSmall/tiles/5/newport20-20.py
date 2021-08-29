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
        texture=ImageTexture(url=['../../images/5/newport20-20.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.599505666650224,-71.27344644014977,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[17,19,20,20,20,21,24,25,27,29,31,32,36,41,41,40,42,44,46,48,49,47,47,15,17,18,20,20,22,25,27,28,29,30,32,36,41,41,41,43,45,45,47,48,46,46,14,15,17,19,21,23,25,25,27,28,30,33,37,41,44,44,44,44,44,45,47,45,46,13,14,17,19,19,22,23,24,28,30,34,35,37,39,42,44,43,42,42,44,45,46,47,13,14,17,19,20,21,23,25,29,32,35,36,36,37,40,41,42,42,43,44,45,46,46,15,14,16,18,21,21,22,24,26,29,31,34,36,37,38,40,42,43,43,45,45,44,46,17,16,17,18,19,20,22,24,25,28,30,33,36,37,38,41,43,44,45,45,46,43,43,17,18,18,17,17,18,23,26,29,30,31,33,36,37,38,41,42,44,45,47,47,46,47,15,15,14,16,17,20,25,29,29,29,31,33,35,36,38,41,43,44,46,47,47,47,48,15,15,13,16,19,22,26,28,26,27,30,33,34,35,37,40,44,45,47,46,46,47,47,16,16,14,17,19,22,24,25,26,29,30,32,34,36,38,40,41,43,46,47,47,47,47,15,15,17,18,21,24,25,25,26,28,30,32,34,34,36,38,42,44,47,48,49,50,50,14,17,20,20,23,23,24,23,25,28,31,33,33,34,36,38,43,46,48,49,51,53,52,16,20,20,22,24,21,21,23,25,29,31,32,33,35,37,39,42,46,48,50,51,53,54,13,16,18,20,22,22,22,23,27,29,30,31,34,36,39,42,44,46,47,49,50,53,56,11,15,19,19,20,24,23,24,27,29,31,32,33,36,39,43,45,47,48,50,51,53,56,12,16,19,19,20,24,24,24,25,27,31,32,33,36,39,41,43,45,49,50,53,54,56,11,15,18,18,19,23,24,25,26,29,32,34,35,37,39,40,42,44,46,48,50,53,53,10,14,19,18,19,20,23,24,25,28,31,34,35,39,41,42,45,46,46,46,47,50,51,6,10,16,18,19,19,22,23,25,29,30,34,35,38,39,41,45,47,46,45,45,47,49,6,8,14,19,21,20,23,24,24,27,31,33,36,38,38,39,40,42,42,43,44,45,46,5,8,12,18,20,20,22,25,26,27,29,31,34,39,40,39,39,41,41,44,44,43,43,5,9,11,16,18,17,21,25,27,28,28,30,33,40,41,39,39,41,41,43,44,43,42],
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
