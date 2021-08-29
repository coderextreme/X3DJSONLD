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
        texture=ImageTexture(url=['../../images/5/newport19-31.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59143480887271,-71.18466700459715,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[11,10,10,10,10,11,13,16,19,21,23,26,30,36,39,39,39,39,37,36,34,34,35,11,10,10,10,10,11,13,16,20,22,25,27,31,35,38,41,41,41,39,37,35,34,35,10,10,10,10,11,12,14,17,20,23,25,28,33,36,38,41,42,41,39,36,35,35,35,10,10,10,10,11,12,15,18,20,23,26,31,36,39,41,42,43,41,39,36,34,35,34,10,10,10,10,10,12,15,18,21,23,27,33,38,41,43,44,43,41,39,36,35,35,34,10,10,10,10,11,12,15,18,22,25,29,34,39,42,45,45,44,43,39,36,36,35,35,10,10,10,10,11,13,15,18,22,27,31,35,40,43,45,46,46,45,41,37,36,35,35,10,10,10,10,11,13,16,19,24,28,33,38,42,45,46,47,47,45,40,37,37,36,35,10,10,10,10,12,14,17,21,26,31,36,40,45,46,47,45,43,40,37,35,35,37,37,10,10,10,11,13,15,18,23,28,34,39,44,47,48,46,43,40,36,35,35,35,34,34,10,10,10,11,13,15,19,24,28,35,42,47,48,48,46,43,40,36,35,35,34,34,34,10,10,10,11,13,15,20,25,30,37,44,49,50,49,46,43,39,35,34,34,34,33,33,10,10,10,11,13,16,22,27,33,39,45,50,50,47,44,41,37,35,35,34,34,34,34,10,10,10,11,14,18,24,29,35,40,45,49,48,45,41,38,36,36,36,35,34,34,34,10,10,10,12,15,19,25,30,35,39,43,46,46,43,40,38,37,37,36,36,35,34,34,10,10,11,13,15,20,24,30,34,38,41,44,43,41,39,38,38,38,38,38,37,36,35,10,10,12,14,17,21,25,30,34,36,38,39,39,38,38,38,38,39,39,39,38,38,37,11,11,12,15,18,21,26,29,32,34,34,35,37,38,38,38,39,39,39,40,39,39,38,10,11,12,15,18,21,24,28,29,30,33,35,37,38,38,38,39,39,39,40,40,40,40,10,11,12,14,17,20,23,25,27,29,34,37,38,38,38,38,38,39,39,39,39,39,40,10,11,12,15,18,21,23,25,27,30,35,38,39,39,39,38,39,40,39,37,36,36,36,10,11,13,16,20,22,25,27,29,33,37,39,40,40,39,38,38,38,37,35,34,34,34,11,11,13,16,21,23,25,27,30,34,38,40,40,40,39,38,37,37,36,34,34,34,34],
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
