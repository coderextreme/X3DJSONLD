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
        texture=ImageTexture(url=['../../images/5/newport14-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.551080519985156,-71.37836759125742,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[22,24,27,27,26,27,28,29,30,30,31,30,29,28,28,27,26,26,26,27,26,26,26,22,23,25,26,25,27,27,27,27,29,30,30,28,26,26,25,25,26,26,26,25,25,25,21,22,23,24,24,25,26,27,27,28,28,29,29,27,26,24,25,26,26,24,23,23,24,21,23,24,24,23,23,26,26,26,27,26,26,26,25,25,23,23,24,23,24,24,24,24,21,22,23,23,22,23,24,25,26,25,23,22,21,22,24,24,24,23,23,25,28,27,27,19,20,21,21,22,22,22,22,24,23,22,21,19,22,23,24,25,23,23,24,28,28,29,20,21,20,21,22,20,20,21,21,21,22,22,22,22,22,23,24,23,23,23,26,27,28,19,20,21,21,20,19,20,20,19,20,21,20,20,21,22,22,23,24,24,23,25,25,24,20,20,21,20,20,19,20,19,18,19,19,20,21,21,21,22,23,24,24,24,24,25,24,19,20,19,19,20,19,20,19,18,16,18,19,22,22,22,22,23,23,23,24,24,25,24,19,19,19,20,20,19,20,20,18,17,17,19,20,21,21,22,21,21,23,25,24,23,23,19,20,19,21,20,20,20,20,19,18,17,19,21,21,21,21,21,21,23,24,24,23,23,20,20,19,20,22,21,20,20,20,19,19,20,21,21,21,20,20,20,22,23,23,23,24,19,18,17,19,20,21,20,19,19,21,22,21,21,20,21,20,19,21,23,23,23,23,24,17,16,17,18,19,20,20,18,18,19,21,20,21,20,21,20,19,22,23,24,23,23,24,17,16,17,18,19,19,18,18,18,18,18,19,19,20,19,18,19,22,23,24,23,23,24,17,17,17,17,18,19,19,19,18,18,18,19,19,18,19,18,19,21,22,23,24,24,25,16,18,19,18,18,17,17,17,17,17,18,20,20,19,19,20,20,21,21,22,23,24,25,16,17,18,19,18,16,16,17,16,16,16,18,19,18,19,20,21,21,21,22,22,24,25,15,15,16,17,17,15,16,17,16,16,16,15,16,18,20,20,21,21,23,22,22,24,24,12,13,14,15,16,17,18,18,18,18,17,15,15,17,19,21,22,22,22,22,23,23,23,13,13,14,14,15,17,18,17,18,18,17,14,15,17,19,21,22,23,21,22,23,23,24,12,14,14,13,14,16,17,17,17,17,16,14,15,17,19,22,23,23,22,23,23,23,24],
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
