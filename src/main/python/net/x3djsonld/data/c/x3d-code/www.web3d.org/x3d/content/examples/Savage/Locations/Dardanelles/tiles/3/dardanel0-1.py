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
    component(level=1,name='Geospatial'),
    meta(content='dardanel0-1.x3d',name='title'),
    meta(content='X3D Earth tile file for Dardanelles location',name='description'),
    meta(content='Byounghyun Yoo, Don Brutzman',name='creator'),
    meta(content='6 September 2010',name='created'),
    meta(content='12 Jume 2012',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/Dardanelles.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/tiles/3/dardanel0-1.x3d',name='identifier'),
    meta(content='Rez, http://planet-earth.org/Rez/RezIndex.html',name='generator'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../../../license.html',name='license')]),
  Scene=Scene(
    children=[
    GeoViewpoint(description='GeoViewpoint_3_01',geoSystem=['GDC'],orientation=(-1,0,0,1.57),position=(39.79722229877732,26.258274600407223,67800.45584024992),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(40.16643453115464,26.49987728550963,0),geoSystem=['GDC'])),
    GeoLOD(center=(39.79722229877732,26.258274600407223,0.0),child1Url=['../../tiles/4/dardanel0-1.x3d'],child2Url=['../../tiles/4/dardanel1-1.x3d'],range=81360.55,
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(repeatS=False,repeatT=False,url=['../../images/3/dardanel0-1.jpg'])),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(39.4280100664,26.016671915304816,0.0),geoSystem=["GD"],height=[0,1,1,0,1,1,3,1,0,0,0,1,1,2,2,0,0,0,1,0,1,1,1,0,0,0,219,226,185,69,6,2,1,0,3,0,0,1,1,0,0,0,0,0,1,0,0,116,232,294,229,273,307,288,266,194,92,102,124,130,35,0,0,4,0,2,0,0,1,3,75,74,76,107,103,171,233,171,308,287,299,319,318,395,249,184,226,158,0,0,2,1,6,8,10,330,205,332,362,356,420,421,392,335,303,251,406,482,414,449,1,1,1,2,1,0,55,130,218,419,479,554,459,434,403,382,314,284,315,350,337,317,1,0,0,0,2,1,2,181,421,316,417,403,314,217,171,193,205,182,244,296,230,222,3,2,0,1,1,2,1,48,162,255,301,336,391,323,331,103,94,142,141,183,234,246,0,0,1,1,2,0,6,32,143,186,270,481,345,170,103,101,148,153,102,133,187,180,1,1,4,0,1,3,50,72,127,152,167,221,97,80,72,92,127,84,88,111,97,111,0,1,39,3,2,2,13,49,89,135,187,183,149,87,44,65,70,84,69,58,62,67,38,12,71,1,0,2,4,12,43,61,97,165,115,40,121,131,181,188,174,151,127,99,3,0,3,2,2,2,25,48,68,48,44,88,190,181,207,260,317,301,297,300,241,218,2,3,2,2,3,2,4,38,35,15,21,24,44,83,191,274,308,389,428,421,334,333,2,1,2,1,3,3,3,11,13,14,54,64,92,132,174,240,210,314,399,405,480,457,2,3,4,4,4,2,2,16,7,9,51,32,60,102,89,200,266,411,366,417,402,387,4,3,3,4,2,2,3,2,2,1,4,3,4,115,244,302,347,332,355,236,302,344,1,4,2,3,4,2,2,10,8,3,2,2,4,3,2,108,156,148,64,87,236,269,3,2,2,2,5,4,5,4,76,105,164,155,101,5,4,11,31,101,178,312,172,142,1,2,1,3,6,3,6,6,3,77,94,103,154,133,6,3,5,13,37,70,91,54,2,1,0,1,2,1,2,3,3,3,27,69,136,138,72,8,6,28,70,103,80,87,2,1,0,1,1,1,3,3,3,3,27,68,144,129,74,8,5,27,66,98,74,84],normalPerVertex=False,xDimension=22,xSpacing=0.023009779,zDimension=22,zSpacing=0.03516307,
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

print ("python x3d.py load successful for dardanel0-1.py")
