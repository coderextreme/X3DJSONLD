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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    component(name='Geospatial',level=1),
    component(name='Navigation',level=3)]),
  Scene=Scene(
    children=[
    GeoViewpoint(description='GeoViewpoint_3_32',geoSystem=['GDC'],position=(36.84951352493392,10.22232563456408,589.9600450175058),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.85232285848162,10.229842500002526,0),geoSystem=['GDC'])),
    GeoLOD(center=(36.84951352493392,10.22232563456408,0.0),range=707.952,child1Url=['../../tiles/4/airport6-4.x3d'],child2Url=['../../tiles/4/airport6-5.x3d'],child3Url=['../../tiles/4/airport7-4.x3d'],child4Url=['../../tiles/4/airport7-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/airport3-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.846704191386216,10.219820012751264,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=12,xSpacing=4.555676E-4,zDimension=14,zSpacing=4.3220515E-4,height=[5,4,4,5,6,8,8,5,2,1,1,1,6,5,5,5,7,9,10,6,2,1,1,-1,7,6,5,6,7,8,8,5,2,1,1,-1,8,7,6,7,8,7,5,4,2,1,1,1,7,6,6,7,8,6,4,2,1,1,1,1,6,6,6,7,7,5,3,2,-1,-1,-1,1,5,7,8,9,8,6,4,2,-1,-1,-1,1,4,8,11,11,10,8,5,2,-1,-1,1,2,2,6,9,10,9,7,5,3,-1,-1,2,2,2,4,6,7,7,6,4,3,2,2,3,2,2,3,4,4,5,4,3,4,3,3,3,3,3,3,3,3,3,3,3,3,4,4,4,4,4,3,3,3,2,1,2,3,4,4,4,4,3,4,4,4,3,1,1,2,3,4,4,4],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
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
