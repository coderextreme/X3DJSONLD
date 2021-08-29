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
    GeoViewpoint(description='GeoViewpoint_1_10',geoSystem=['GDC'],position=(36.86356019267243,10.219820012751264,2359.840180070023),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.85232285848162,10.229842500002526,0),geoSystem=['GDC'])),
    GeoLOD(center=(36.86356019267243,10.219820012751264,0.0),range=2831.808,child1Url=['../../tiles/2/airport2-0.x3d'],child2Url=['../../tiles/2/airport2-1.x3d'],child3Url=['../../tiles/2/airport3-0.x3d'],child4Url=['../../tiles/2/airport3-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/1/airport1-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.85232285848162,10.2097975255,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=26,xSpacing=8.01799E-4,zDimension=28,zSpacing=8.323951E-4,height=[9,8,8,6,2,2,3,4,4,4,4,4,3,2,3,2,6,4,3,3,2,2,2,2,1,-1,8,8,8,7,4,4,4,5,3,4,4,3,3,3,4,4,5,3,2,3,4,5,4,3,1,1,7,7,6,6,5,5,5,4,3,6,4,1,3,2,2,4,4,3,2,5,3,3,2,3,2,2,7,7,6,5,4,4,4,4,5,5,4,3,4,3,2,3,4,3,2,4,1,-1,-1,-1,1,2,7,5,5,5,4,3,5,7,6,4,3,4,3,2,-1,2,3,2,1,1,-1,1,1,2,2,2,7,6,5,6,6,6,8,7,3,1,4,5,3,1,3,2,5,5,2,1,2,2,2,3,3,3,7,7,8,8,8,8,9,6,3,3,5,4,3,2,2,4,8,8,4,1,2,3,1,2,2,2,7,7,8,9,9,9,7,5,5,5,4,4,4,5,5,5,8,8,5,2,3,4,4,1,2,3,7,8,9,9,9,8,6,4,4,4,4,4,4,4,4,3,4,5,5,3,2,4,5,4,3,3,7,8,8,7,8,8,6,4,4,4,3,2,2,2,4,4,3,4,5,4,3,4,4,2,1,1,7,8,8,6,6,5,4,3,3,3,2,1,-1,4,5,5,4,4,5,5,4,4,4,2,-1,-1,6,6,6,7,6,5,4,4,4,4,2,-1,3,4,5,4,3,3,5,7,6,5,4,1,-1,-1,4,5,6,6,6,6,6,6,6,5,2,3,5,5,4,5,4,3,4,6,6,4,2,2,1,1,5,5,5,5,6,6,5,5,5,5,4,5,5,5,4,7,6,4,4,5,4,5,4,3,2,2,5,5,4,4,5,6,6,6,5,4,5,6,5,5,6,6,5,4,4,5,4,6,7,5,4,4,6,5,4,4,6,7,5,4,4,4,4,4,4,4,5,5,5,6,5,4,4,6,8,8,5,4,6,6,6,5,5,5,5,4,4,5,4,4,4,5,6,6,6,7,6,5,5,4,4,6,5,4,5,5,4,4,5,5,5,4,4,6,6,5,5,5,6,5,5,4,4,5,7,5,3,4,4,3,5,5,4,3,3,4,6,5,5,5,6,6,6,6,6,5,4,5,5,4,6,4,1,2,2,2,4,3,3,2,3,4,4,4,4,6,6,6,6,6,6,5,5,6,5,4,5,4,3,2,1,1,5,4,4,5,5,4,3,4,5,5,6,6,5,6,6,6,5,6,6,5,4,5,4,4,3,2,5,6,6,7,6,4,4,4,5,5,6,6,6,6,6,6,6,6,8,6,4,3,3,4,4,4,5,5,5,6,6,5,3,3,5,6,6,7,6,6,6,5,5,7,7,5,4,2,3,5,4,4,5,4,4,4,4,4,4,4,5,5,5,7,6,6,6,6,6,7,6,5,3,3,4,6,5,5,5,4,4,4,4,4,5,5,5,6,6,7,6,6,6,6,7,7,6,4,3,3,5,4,4,3,4,4,5,4,4,5,5,5,6,6,6,6,7,6,6,6,6,6,6,5,4,5,5,5,5,4,3,3,3,3,4,5,5,5,6,6,6,6,7,7,6,5,6,6,5,5,5,4,5,6,6,6,3,3,3,3,4,5,5,5,6,6,6,6,7,7,6,5,6,6,5,5,5,4,5,6,6,6],
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
