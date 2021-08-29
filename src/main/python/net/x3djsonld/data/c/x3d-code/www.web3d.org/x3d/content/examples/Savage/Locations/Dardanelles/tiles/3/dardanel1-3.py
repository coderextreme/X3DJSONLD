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
    meta(content='dardanel1-3.x3d',name='title'),
    meta(content='X3D Earth tile file for Dardanelles location',name='description'),
    meta(content='Byounghyun Yoo, Don Brutzman',name='creator'),
    meta(content='6 September 2010',name='created'),
    meta(content='12 Jume 2012',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/Dardanelles.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/tiles/3/dardanel1-3.x3d',name='identifier'),
    meta(content='Rez, http://planet-earth.org/Rez/RezIndex.html',name='generator'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../../../license.html',name='license')]),
  Scene=Scene(
    children=[
    GeoViewpoint(description='GeoViewpoint_3_13',geoSystem=['GDC'],orientation=(-1,0,0,1.57),position=(40.535646763531965,27.22468534081685,67800.45584024992),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(40.16643453115464,26.49987728550963,0),geoSystem=['GDC'])),
    GeoLOD(center=(40.535646763531965,27.22468534081685,0.0),child1Url=['../../tiles/4/dardanel2-3.x3d'],child2Url=['../../tiles/4/dardanel3-3.x3d'],range=81360.55,
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(repeatS=False,repeatT=False,url=['../../images/3/dardanel1-3.jpg'])),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.16643453115464,26.983082655714444,0.0),geoSystem=["GD"],height=[93,91,256,157,87,63,211,212,223,58,107,266,216,404,406,238,211,119,397,306,178,198,208,193,149,80,104,39,40,76,198,255,189,34,104,120,252,201,192,258,357,483,446,453,339,196,128,86,52,45,30,28,25,51,48,24,47,61,53,41,137,90,132,188,286,319,335,164,119,101,57,64,42,53,55,48,15,15,16,20,39,64,69,60,78,42,70,58,103,70,49,56,71,43,40,24,18,28,2,3,12,10,34,55,45,29,11,2,0,0,79,134,140,95,79,180,103,59,39,23,22,9,4,4,6,4,3,-4,0,-8,-3,-5,1,55,47,77,54,28,79,197,106,147,67,51,39,43,-3,-3,-2,0,0,0,-1,-1,2,4,1,0,50,73,136,117,60,98,50,115,126,67,57,-2,0,0,0,-3,-3,-3,1,1,1,2,4,1,0,-1,0,0,0,7,41,20,4,3,0,0,-1,-1,-2,-6,2,1,4,4,4,2,1,0,0,1,2,0,3,5,0,0,-2,-3,-1,-2,0,-1,2,3,2,0,1,1,1,3,3,1,2,3,0,0,-1,0,0,0,0,-2,0,0,56,8,4,0,0,1,2,0,1,3,3,-2,4,2,0,-2,0,0,0,0,-1,-6,345,160,40,55,10,5,3,2,0,2,5,0,0,4,0,1,0,0,0,0,0,0,146,211,268,244,180,145,119,138,47,12,-1,0,-2,0,0,2,4,2,0,0,-2,0,28,29,46,151,151,188,335,430,524,304,118,123,24,1,0,0,0,0,-2,0,0,-1,225,198,106,196,322,231,280,444,464,354,293,273,169,101,21,0,0,1,0,0,0,1,347,268,194,89,198,222,298,283,501,568,541,684,546,502,215,-3,2,-1,0,0,1,0,209,105,102,141,141,124,153,249,201,299,319,434,503,783,869,354,69,-3,0,1,-2,0,111,132,187,142,153,121,159,137,178,256,256,255,320,333,390,406,353,328,355,1,-2,0,153,181,194,164,195,160,158,244,245,250,252,351,205,272,251,279,141,51,64,49,4,-2,198,125,129,149,134,166,178,194,261,156,260,246,223,280,255,309,199,164,38,71,49,11,198,129,130,151,134,166,174,197,257,155,259,240,221,277,255,312,206,164,39,72,46,10],normalPerVertex=False,xDimension=22,xSpacing=0.023009779,zDimension=22,zSpacing=0.03516307,
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

print ("python x3d.py load successful for dardanel1-3.py")
