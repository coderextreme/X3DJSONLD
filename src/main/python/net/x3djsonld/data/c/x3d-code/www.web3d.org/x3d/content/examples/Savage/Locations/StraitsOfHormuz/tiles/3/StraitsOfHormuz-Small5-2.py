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
    GeoViewpoint(description='GeoViewpoint_3_52',geoSystem=['GDC'],position=(26.681944553228952,55.87968120941913,29163.6915586987),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(26.681944553228952,55.87968120941913,0.0),range=34996.43,child1Url=['../../tiles/4/StraitsOfHormuz-Small10-4.x3d'],child2Url=['../../tiles/4/StraitsOfHormuz-Small10-5.x3d'],child3Url=['../../tiles/4/StraitsOfHormuz-Small11-4.x3d'],child4Url=['../../tiles/4/StraitsOfHormuz-Small11-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/StraitsOfHormuz-Small5-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.569849613744502,55.729040188915306,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0143467635,zDimension=22,zSpacing=0.010675709,height=[2,1,2,1,0,0,0,2,2,2,1,0,1,2,3,2,0,1,1,0,1,2,0,3,2,0,0,2,2,0,3,3,0,0,2,1,2,1,2,2,2,0,0,2,-1,0,0,0,0,1,0,0,2,0,1,1,2,0,2,1,0,2,0,1,3,2,5,1,1,3,0,1,1,1,0,0,1,1,1,0,3,3,0,1,1,0,0,0,2,0,2,2,1,1,1,0,0,0,1,3,1,1,0,0,2,1,2,2,1,1,0,0,3,1,0,0,2,0,3,1,0,0,0,0,1,1,1,1,0,2,2,0,2,2,0,1,1,1,3,1,0,2,5,1,2,1,1,0,0,2,1,1,0,1,3,0,1,4,2,3,2,0,7,20,38,5,2,0,0,1,2,2,1,1,2,2,5,0,0,3,0,3,1,4,1,25,42,34,0,0,1,0,1,1,2,0,0,2,6,0,1,0,3,0,0,0,-2,26,38,49,0,3,1,1,2,1,2,1,0,0,2,2,0,3,3,2,3,1,3,12,40,36,24,0,2,0,1,1,1,1,1,1,1,-1,0,1,6,3,3,0,0,4,28,61,7,2,1,0,0,2,3,0,1,1,5,1,0,4,3,0,0,1,3,3,12,8,-2,0,0,1,2,2,0,0,1,0,4,15,30,3,0,2,0,1,0,1,1,3,1,3,0,1,2,2,0,0,1,1,35,11,60,23,14,1,1,1,4,0,0,0,-1,23,24,8,1,1,1,0,0,0,74,27,36,29,13,12,2,6,0,0,0,2,-1,29,25,24,10,0,0,0,0,0,120,87,63,88,35,14,5,0,2,3,0,0,3,14,9,6,21,1,0,0,0,0,122,49,48,34,93,29,18,8,1,0,0,2,5,5,13,17,3,26,1,0,0,1,72,18,20,27,37,129,44,19,6,2,3,3,3,5,21,21,32,6,23,2,2,1,24,9,11,15,19,23,24,13,13,6,2,3,5,4,10,23,16,6,7,3,2,4,9,3,6,4,13,19,22,31,26,6,7,9,12,8,11,17,13,9,7,7,9,8,8,4,6,4,12,16,22,31,26,5,7,10,13,12,11,17,13,8,8,8,8,8],
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
