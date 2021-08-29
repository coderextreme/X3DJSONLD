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
        texture=ImageTexture(url=['../../images/5/newport14-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.551080519985156,-71.36222587570239,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[22,21,18,15,14,14,11,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,23,19,17,16,14,13,8,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,24,22,20,17,16,14,11,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,25,23,20,18,16,15,12,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,25,23,21,18,17,15,13,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,25,23,21,20,18,16,13,9,3,0,0,0,0,0,0,0,0,0,0,0,0,0,25,25,23,21,20,18,16,15,13,6,0,0,0,0,0,0,0,0,0,0,0,0,0,27,25,24,22,20,17,15,15,13,6,0,0,0,0,0,0,0,0,0,0,0,0,0,28,27,25,24,21,17,15,15,12,5,0,0,0,0,0,0,0,0,0,0,0,0,0,28,28,25,23,21,19,16,15,13,10,3,0,0,0,0,0,0,0,0,0,0,0,0,28,27,25,22,21,19,17,15,14,12,3,0,0,0,0,0,0,0,0,0,0,0,0,27,27,27,26,23,20,17,15,14,12,3,0,0,0,0,0,0,0,0,0,0,0,0,27,26,29,28,23,20,17,15,15,12,3,0,0,0,0,0,0,0,0,0,0,0,0,27,25,26,25,23,20,17,17,15,11,2,0,0,0,0,0,0,0,0,0,0,0,0,27,26,25,23,21,20,16,16,15,11,2,0,0,0,0,0,0,0,0,0,0,0,0,27,28,25,22,19,20,17,16,15,12,3,0,0,0,0,0,0,0,0,0,0,0,0,26,25,25,24,23,22,20,17,15,11,2,0,0,0,0,0,0,0,0,0,0,0,0,27,25,25,24,23,21,18,15,14,10,2,0,0,0,0,0,0,0,0,0,0,0,0,27,26,23,22,20,19,17,15,15,12,2,0,0,0,0,0,0,0,0,0,0,0,0,28,27,24,21,21,19,17,15,15,13,6,0,0,0,0,0,0,0,0,0,0,0,0,29,26,23,22,22,18,17,14,15,15,10,0,0,0,0,0,0,0,0,0,0,0,0,28,26,25,23,23,18,17,14,15,13,8,0,0,0,0,0,0,0,0,0,0,0,0,29,27,27,25,24,20,18,16,16,12,3,0,0,0,0,0,0,0,0,0,0,0,0],
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
