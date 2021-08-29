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
        texture=ImageTexture(url=['../../images/5/newport20-31.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.599505666650224,-71.18466700459715,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[11,11,13,16,21,23,25,27,30,34,38,40,40,40,39,38,37,37,36,34,34,34,34,11,12,14,18,22,24,26,29,32,37,41,42,42,41,40,38,37,35,34,34,34,34,34,12,14,16,21,25,27,29,31,35,40,44,44,44,43,42,40,38,35,34,34,34,34,34,12,15,18,24,28,31,33,37,41,45,46,45,45,44,42,41,38,36,35,34,34,34,34,13,16,20,24,28,31,35,42,46,49,49,47,46,44,42,41,39,37,36,35,34,34,34,13,17,20,23,27,30,35,42,47,49,48,47,45,43,42,41,40,39,37,36,35,34,34,14,17,19,21,25,29,34,41,46,48,47,45,44,42,42,41,41,41,39,38,37,35,34,14,17,19,21,24,28,33,39,43,45,45,45,44,43,43,43,43,42,41,40,39,37,36,13,16,19,21,25,29,32,38,41,42,43,44,45,44,45,45,44,43,42,41,39,38,37,12,15,18,21,25,29,33,38,41,41,42,44,45,46,46,46,45,44,42,41,40,39,38,12,15,18,22,26,29,33,38,41,42,44,45,46,46,46,46,45,43,42,41,40,40,40,12,15,19,23,27,31,34,38,41,44,46,47,47,47,47,46,45,43,42,41,41,41,41,12,15,19,23,28,33,37,40,43,47,48,48,48,48,47,46,45,43,41,41,41,41,41,12,15,19,24,28,34,39,42,46,50,49,48,48,49,49,47,45,43,41,41,41,41,41,11,14,18,23,28,35,41,44,47,48,49,49,51,53,53,50,47,45,43,42,41,41,41,11,14,17,23,29,35,41,44,45,47,49,50,51,54,54,51,48,46,44,43,43,42,43,11,14,17,22,29,35,40,43,44,46,48,49,51,53,53,50,48,47,46,45,44,44,44,11,14,18,22,29,34,38,41,43,45,47,48,49,49,48,48,48,48,48,47,46,46,46,11,15,17,22,27,32,37,40,42,45,47,47,47,46,45,45,47,48,50,48,48,48,48,10,13,16,20,26,31,37,42,44,46,47,46,45,44,44,44,44,46,49,49,50,49,49,9,12,14,19,27,33,40,44,47,47,47,45,44,44,43,43,44,46,48,51,51,49,47,8,10,13,19,27,34,41,47,49,48,46,44,44,43,43,43,44,46,47,50,50,47,45,7,10,13,20,27,33,42,48,51,49,46,44,44,43,43,43,45,45,47,48,48,45,44],
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
