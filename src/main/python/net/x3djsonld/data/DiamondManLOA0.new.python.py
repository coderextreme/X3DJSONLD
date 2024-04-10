####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python DiamondManLOA0.py
#
# Python package x3d.py package is available on PyPI for import.
#   This approach simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package in other Python programs:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix,
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Immersive',version='4.0',
  head=head(
    children=[
    component(name='HAnim',level=1),
    meta(content='DiamondManLOA0.x3d',name='title'),
    meta(content='HAnim skeletal structure for Level of Action (LOA) zero, with one diamond at the base node for the structure. HumanoidRoot only, so this is the minimum legal HAnim humanoid.',name='description'),
    meta(content='Matthew T. Beitler',name='creator'),
    meta(content='Joel S. Pawloski',name='translator'),
    meta(content='12 November 2001',name='created'),
    meta(content='23 December 2021',name='modified'),
    meta(content='(a) "Diamonds are a girl\'s best friend." (b) "Gosh, it sure is chilly in here."',name='motto'),
    meta(content='HAnim 2.0 specification, Appendix A: Nominal human body dimensions and levels of articulation (LOAs)',name='reference'),
    meta(content='https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html',name='reference'),
    meta(content='https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html#LevelOfArticulationZero',name='reference'),
    meta(content='HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Zero',name='reference'),
    meta(content='http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa',name='reference'),
    meta(content='http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0.wrl',name='reference'),
    meta(content='http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0-diamond.wrl',name='reference'),
    meta(content='http://ece.uwaterloo.ca/~HAnim',name='reference'),
    meta(content='http://www.cis.upenn.edu/~badler/anthro/89-71.pdf',name='reference'),
    meta(content='http://www.cis.upenn.edu/~badler/anthro/89-71.ps',name='reference'),
    meta(content='http://www.cis.upenn.edu/~beitler',name='reference'),
    meta(content='humanoid_landmark_locations.gif',name='Image'),
    meta(content='http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif',name='Image'),
    meta(content='https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA0.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(info=["HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 0 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"],title='HANIM 2.0 Default Joint Centers, LOA0'),
    NavigationInfo(speed=1.5),
    Viewpoint(centerOfRotation=(0,1,0),description='Diamond Man, LOA 0',position=(0,1,3)),
    HAnimHumanoid(DEF='hanim_humanoid',name='humanoid',loa=0,version='2.0',
      metadata=MetadataSet(name='HAnimHumanoid.info',reference='https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid',
        value=[
        MetadataString(name='usageRestrictions',value=["PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose."])]),
      children=[
      HAnimJoint(DEF='hanim_humanoid_root',name='humanoid_root',center=(0,0.824,0.0277),
        children=[
        HAnimJoint(DEF='hanim_sacroiliac',name='sacroiliac',center=(0,0.9149,0.0016),
          children=[
          HAnimSegment(DEF='hanim_pelvis',name='pelvis',
            children=[
            Transform(translation=(0,0.9149,0.0016),
              children=[
              Shape(DEF='DiamondShape',
                appearance=Appearance(
                  material=Material(diffuseColor=(1,1,0))),
                geometry=IndexedFaceSet(coordIndex=[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1],creaseAngle=0.5,
                  coord=Coordinate(point=[(0,0.01,0),(-0.01,0,0),(0,0,0.01),(0.01,0,0),(0,0,-0.01),(0,-0.01,0)])))])])])]),
      HAnimJoint(USE='hanim_humanoid_root'),
      HAnimJoint(USE='hanim_sacroiliac'),
      HAnimSegment(USE='hanim_pelvis'),
      HAnimSite(DEF='hanim_site_view',name='site_view',
        children=[
        Viewpoint(DEF='InclinedView',description='Inclined View',orientation=(-0.113,0.993,0.0347,0.671),position=(1.62,1.05,2.06)),
        Viewpoint(DEF='FrontView',description='Front View',position=(0,0.854,2.57665)),
        Viewpoint(DEF='SideView',description='Side View',orientation=(0,1,0,1.57079),position=(2.5929,0.854,0)),
        Viewpoint(DEF='TopView',description='Top View',orientation=(1,0,0,-1.57079),position=(0,3.4495,0))])],)])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for DiamondManLOA0.py:')
if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel)) # display meta info, hint, warning, error, TODO values in this model
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()
# print(newModelXML) # diagnostic

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful", flush=True)
except Exception as err: # usually BaseException
    # https://stackoverflow.com/questions/18176602/how-to-get-the-name-of-an-exception-that-was-caught-in-python
    print("*** Python-to-VRML export of VRML output failed:", type(err).__name__, err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (under development)")
except Exception as err: # usually SyntaxError
    print("*** Python-to-JSON export of JSON output failed:", type(err).__name__, err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python DiamondManLOA0.py load and self-test diagnostics complete.")
