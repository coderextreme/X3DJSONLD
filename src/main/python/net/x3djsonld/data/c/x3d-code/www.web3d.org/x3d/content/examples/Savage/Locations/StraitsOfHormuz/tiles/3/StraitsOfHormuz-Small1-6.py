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
    GeoViewpoint(description='GeoViewpoint_3_16',geoSystem=['GDC'],position=(25.78518503735335,57.084809373449744,29163.6915586987),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(25.78518503735335,57.084809373449744,0.0),range=34996.43,child1Url=['../../tiles/4/StraitsOfHormuz-Small2-12.x3d'],child2Url=['../../tiles/4/StraitsOfHormuz-Small2-13.x3d'],child3Url=['../../tiles/4/StraitsOfHormuz-Small3-12.x3d'],child4Url=['../../tiles/4/StraitsOfHormuz-Small3-13.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/StraitsOfHormuz-Small1-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.6730900978689,56.93416835294592,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0143467635,zDimension=22,zSpacing=0.010675709,height=[0,3,0,2,2,2,2,2,0,3,2,2,0,0,2,2,0,0,0,0,-1,7,0,-1,0,0,3,1,3,-1,0,1,2,0,1,0,0,1,0,0,0,-4,4,2,0,4,1,1,1,0,2,3,1,4,1,1,1,0,0,0,3,1,-1,2,6,2,1,1,2,3,3,4,3,4,7,0,1,0,-1,0,0,-2,1,-1,-1,0,11,13,0,2,1,3,1,1,5,6,0,0,1,0,0,0,1,-1,-1,-7,1,-1,-4,-4,1,1,-1,0,3,0,4,2,-3,0,0,-2,0,0,0,0,-2,-4,8,0,-1,-1,0,0,5,0,1,3,-3,2,0,1,-1,-3,-1,1,0,-1,5,1,0,11,1,1,0,-3,0,0,4,-3,1,1,0,-1,0,-1,0,2,1,-4,1,0,-5,0,5,3,-1,0,5,0,0,-1,0,0,0,0,-2,-2,1,2,0,24,2,-8,-4,-5,0,0,-1,0,0,-2,0,-1,0,0,0,0,4,0,2,1,3,-2,0,-1,-8,-5,0,0,0,1,0,-2,0,-1,-1,0,0,3,-2,16,-1,2,9,21,0,3,-4,0,0,0,0,0,-1,-1,0,-1,0,0,-1,0,0,0,-3,6,2,0,6,0,3,0,4,5,0,1,-1,0,-1,0,-2,-1,0,0,0,6,0,5,2,7,0,2,0,-1,-2,-2,0,0,0,0,-2,0,0,0,1,4,4,6,9,10,7,2,8,17,-1,-1,1,3,-1,-2,-2,-2,-1,0,0,0,4,6,9,3,11,12,-2,1,1,1,0,0,-1,-1,-2,0,-2,-2,0,-2,0,0,2,3,1,6,7,-1,15,0,1,0,0,0,0,0,-2,-2,-2,0,0,0,1,1,5,5,6,3,0,-4,0,1,0,0,0,-5,0,0,0,-1,0,1,1,2,2,5,5,3,3,0,3,8,5,1,0,0,-2,0,0,0,-2,0,0,1,0,1,2,3,2,1,-4,0,6,0,-1,3,0,0,0,-5,0,-1,0,0,1,2,4,3,4,3,3,0,0,-2,4,0,0,2,0,-3,0,7,2,1,0,1,2,2,3,2,2,1,0,-1,2,0,-3,0,0,3,-4,3,7,5,4,0,0,2,4,2,3,2,2,1,0,0,1,0,-2,0,0,4,-4,3,7,5,3,0],
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
