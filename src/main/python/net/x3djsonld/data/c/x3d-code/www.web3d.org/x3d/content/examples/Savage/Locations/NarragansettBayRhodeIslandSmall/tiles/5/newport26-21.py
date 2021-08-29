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
        texture=ImageTexture(url=['../../images/5/newport26-21.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64793081331529,-71.26537558237226,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,4,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,8,10,11,10,11,11,0,0,0,0,0,0,0,0,0,0,0,0,0,5,8,7,13,14,15,15,12,13,15,0,0,0,0,0,0,0,0,0,0,1,6,8,15,15,16,17,16,16,16,15,15,18,0,0,0,0,0,0,0,0,1,2,6,10,13,19,18,19,21,22,21,21,19,20,23,0,0,0,0,0,0,0,3,6,8,12,13,15,20,22,23,26,25,26,28,25,26,27,0,0,0,0,0,1,3,7,11,13,15,18,18,21,23,25,29,27,30,33,32,33,29,0,0,0,0,0,2,7,9,14,18,22,25,24,25,25,27,30,28,31,33,37,36,32,0,0,0,0,1,4,9,11,15,21,26,29,29,29,29,30,31,29,32,33,36,38,36,0,0,0,0,1,7,12,15,19,23,27,31,32,32,33,34,33,32,35,36,38,38,36,0,0,0,1,5,9,13,17,21,25,29,33,33,33,36,37,36,34,37,38,38,36,34,0,0,0,3,9,12,16,20,23,27,31,33,34,35,38,41,40,39,40,39,39,35,33,0,0,2,9,11,14,18,21,23,27,31,34,36,39,42,42,42,40,42,41,40,38,35,0,0,3,9,12,15,19,22,24,27,31,34,36,40,42,42,43,41,43,42,40,39,35],
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
