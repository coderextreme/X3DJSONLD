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
        texture=ImageTexture(url=['../../images/5/newport19-24.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59143480887271,-71.24116300903972,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[31,26,22,17,13,8,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,26,21,16,12,7,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,25,20,15,11,6,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,26,21,15,10,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,24,20,15,10,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,24,18,13,8,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,23,18,13,8,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,21,16,13,8,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,24,20,16,13,8,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,24,20,16,13,8,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,20,17,13,8,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,19,16,13,9,4,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,20,16,14,10,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,24,20,17,14,10,5,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,20,16,13,10,6,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,22,19,16,12,9,5,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,22,19,15,12,9,5,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,22,18,15,11,8,4,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,18,15,11,6,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,17,14,10,6,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,19,16,13,10,5,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,17,14,10,5,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,17,14,10,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
