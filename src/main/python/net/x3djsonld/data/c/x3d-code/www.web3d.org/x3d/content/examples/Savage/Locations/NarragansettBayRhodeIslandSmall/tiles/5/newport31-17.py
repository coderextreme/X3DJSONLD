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
        texture=ImageTexture(url=['../../images/5/newport31-17.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.68828510220285,-71.2976590134823,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[6,5,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,2,3,3,2,10,8,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,8,4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,6,6,4,5,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,7,9,8,9,11,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,8,8,9,11,9,10,6,1,1,1,1,1,1,1,1,1,1,1,1,1,3,5,9,8,8,9,12,5,5,4,1,1,1,1,1,1,1,2,4,3,3,3,5,9,10,9,8,9,10,13,4,5,5,4,2,1,1,1,1,2,4,5,7,10,12,11,10,10,10,8,9,12,14,3,3,2,3,3,4,3,3,3,4,5,5,6,8,8,9,10,10,9,10,9,10,11,1,0,0,0,1,4,6,6,6,6,6,6,6,6,7,8,8,8,9,10,9,9,9,0,0,0,0,0,0,5,7,8,8,8,8,7,6,6,6,6,8,8,9,8,8,9,0,0,0,0,0,0,2,6,8,8,6,5,5,5,5,7,8,7,8,8,8,9,9,0,0,0,0,0,0,0,2,5,7,6,4,4,4,4,6,6,7,7,6,7,8,9,0,0,0,0,0,0,0,0,1,4,6,4,4,3,3,4,5,6,7,7,7,7,8,0,0,0,0,0,0,0,0,0,2,6,5,2,2,1,2,2,3,4,6,5,4,5,0,0,0,0,0,0,0,0,0,0,2,3,2,2,2,1,1,2,3,4,5,4,5,0,0,0,0,0,0,0,0,0,0,0,0,1,2,2,2,2,3,4,5,5,5,6,0,0,0,0,0,0,0,0,0,0,0,0,1,2,4,3,3,3,3,4,5,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,2,2,2,3,4,5,5,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,2,2,4,4,4,6,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,1,3,4,4,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,2,3,4,4,5,5],
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
