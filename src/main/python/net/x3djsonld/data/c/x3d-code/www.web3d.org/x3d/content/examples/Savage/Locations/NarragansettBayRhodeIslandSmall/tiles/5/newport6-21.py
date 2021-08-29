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
        texture=ImageTexture(url=['../../images/5/newport6-21.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.486513657765066,-71.26537558237226,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,7,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,8,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,9,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,9,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,9,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,8,5,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,2,12,8,5,2,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,2,2,2,2,12,8,4,2,1,1,1,1,0,0,0,0,0,0,0,0,1,2,2,2,2,2,0,12,7,4,2,2,2,2,2,2,2,2,1,0,0,2,2,1,1,1,1,1,1,0,11,8,5,3,2,2,2,2,2,2,2,2,2,2,2,1,0,0,0,0,0,1,1,10,8,5,3,2,2,2,2,2,2,2,2,2,2,2,1,0,0,0,0,1,2,2,10,8,5,3,2,2,2,2,2,2,2,2,2,2,1,0,0,0,0,0,1,2,2,11,8,5,3,2,2,2,2,2,2,2,2,2,1,0,0,0,0,0,0,0,2,3,12,9,6,3,2,2,2,2,2,2,2,2,3,1,0,0,0,0,0,0,0,1,4,12,9,6,3,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,6,12,9,6,3,2,2,2,2,2,2,1,0,0,0,0,0,0,0,0,0,0,2,9],
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
