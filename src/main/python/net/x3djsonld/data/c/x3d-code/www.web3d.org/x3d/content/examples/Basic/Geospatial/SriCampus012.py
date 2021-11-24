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

newModel=X3D(profile='Interactive',version='3.3',
  head=head(
    children=[
    component(level=1,name='Geospatial'),
    meta(content='SriCampus012.x3d',name='title'),
    meta(content='SRI campus building',name='description'),
    meta(content='Aaron Heller, SRI International',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='1 February 2000',name='created'),
    meta(content='29 April 2003',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://www.geovrml.org/examples',name='reference'),
    meta(content='X3D geospatial example',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus012.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SriCampus012.x3d'),
    TouchSensor(DEF='MouseOverPopupDescription',description='Extrusion-4',enabled=False),
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.75,0.75,0.75))),
      geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,57,56,-1,56,57,55,54,-1,54,55,53,52,-1,52,53,51,50,-1,50,51,49,48,-1,48,49,47,46,-1,46,47,45,44,-1,44,45,43,42,-1,42,43,41,40,-1,40,41,39,38,-1,38,39,37,36,-1,36,37,35,34,-1,34,35,33,32,-1,32,33,31,30,-1,30,31,29,28,-1,28,29,27,26,-1,26,27,25,24,-1,24,25,23,22,-1,22,23,21,20,-1,20,21,19,18,-1,18,19,17,16,-1,16,17,15,14,-1,14,15,13,12,-1,12,13,11,10,-1,10,11,9,8,-1,8,9,7,6,-1,6,7,5,4,-1,4,5,3,2,-1,2,3,1,0,-1,1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,45,47,49,51,53,55,57,-1,56,54,52,50,48,46,44,42,40,38,36,34,32,30,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,-1],solid=False,
        coord=Coordinate(DEF='OBJECT-12-VERTICES',point=[(-1.0686256,0.0,0.7723887),(-1.0686256,-20.0,0.7723887),(0.063376546,0.0,4.206029),(0.063376546,-20.0,4.206029),(4.716409,0.3061002,6.915355),(4.716409,-20.0,6.915355),(-1.1719364,0.3061002,14.422945),(-1.1719364,-20.0,14.422945),(-3.8495347,0.3061002,12.351598),(-3.8495347,-20.0,12.351598),(-20.8311,0.3061002,15.774705),(-20.8311,-20.0,15.774705),(-22.021255,0.3061002,17.785788),(-22.021255,-20.0,17.785788),(-17.562521,0.3061002,34.763638),(-17.562521,-20.0,34.763638),(-15.870724,0.3061002,35.74384),(-15.870724,-20.0,35.74384),(-33.126564,0.3061002,64.48528),(-33.126564,-20.0,64.48528),(-35.09517,0.3061002,63.34427),(-35.09517,-20.0,63.34427),(-52.0277,0.3061002,66.91329),(-52.0277,-20.0,66.91329),(-53.22779,0.3061002,68.954025),(-53.22779,-20.0,68.954025),(-48.953766,0.3061002,85.789246),(-48.953766,-20.0,85.789246),(-52.71416,0.3061002,93.23512),(-52.71416,-20.0,93.23512),(-54.53469,0.3061002,92.06045),(-54.53469,-20.0,92.06045),(-58.895256,0.3061002,93.68394),(-58.895256,-20.0,93.68394),(-65.309044,0.3061002,66.213554),(-65.309044,-20.0,66.213554),(-61.871647,0.3061002,65.41463),(-61.871647,-20.0,65.41463),(-58.861584,0.3061002,60.90366),(-58.861584,-20.0,60.90366),(-59.56157,0.3061002,57.16379),(-59.56157,-20.0,57.16379),(-38.8446,0.3061002,52.775043),(-38.8446,-20.0,52.775043),(-41.836895,0.3061002,41.95669),(-41.836895,-20.0,41.95669),(-39.550034,0.3061002,37.728706),(-39.550034,-20.0,37.728706),(-28.001184,0.3061002,36.367344),(-28.001184,-20.0,36.367344),(-33.969383,0.3061002,15.198111),(-33.969383,-20.0,15.198111),(-30.671528,0.3061002,14.60804),(-30.671528,-20.0,14.60804),(-27.423744,0.3061002,9.455398),(-27.423744,-20.0,9.455398),(-28.65356,0.3061002,5.796571),(-28.65356,-20.0,5.796571)])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SriCampus012.py")
