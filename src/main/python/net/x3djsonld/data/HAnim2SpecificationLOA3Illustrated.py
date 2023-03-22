####################################################################################################
#
# Now available: developmental python x3d.py package on PyPI for import.
#   This approach simplifies Python X3D deployment and use.
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
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix,
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Immersive',version='4.0',
  head=head(
    children=[
    component(level=1,name='HAnim'),
    meta(content='HAnim2SpecificationLOA3Illustrated.x3d',name='title'),
    meta(content='HAnim Specification reference example providing full coverage (and no illustrated visibility) of all specified HAnim constructs, also suitable for re-use as an authoring template.',name='description'),
    meta(content='https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds',name='reference'),
    meta(content='18 February 2021',name='created'),
    meta(content='23 December 2021',name='modified'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='HAnim2SpecificationLOA3Invisible.x3d',name='reference'),
    meta(content='HAnim2SpecificationLOA3Animation.x3d',name='reference'),
    meta(content='HAnimSpecificationExampleChangeLog.txt',name='reference'),
    meta(content='images/BonesAllSkeletonFrontViewLOA1.png',name='Image'),
    meta(content='images/BonesAllSkeletonFrontViewLOA2.png',name='Image'),
    meta(content='images/BonesAllSkeletonFrontViewLOA3.png',name='Image'),
    meta(content='move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations',name='TODO'),
    meta(content='insert MetadataInteger nodes indicating LOA for each Joint and Segment',name='TODO'),
    meta(content='Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.',name='reference'),
    meta(content='http://www.cis.upenn.edu/~badler/anthro/89-71.ps',name='reference'),
    meta(content='tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf',name='reference'),
    meta(content='Don Brutzman and Joe Williams',name='translator'),
    meta(content='BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo',name='generator'),
    meta(content='originals/LOA3ExampleSourceWithDiamondsOriginal.wrl',name='reference'),
    meta(content='originals/LOA3ExampleSourceWithDiamondsOriginal.x3d',name='reference'),
    meta(content='originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d',name='reference'),
    meta(content='HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames',name='reference'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/HAnim2SpecificationLOA3Illustrated.x3d',name='identifier'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(0.3,0.3,0.3)]),
    NavigationInfo(),
    Group(DEF='Original_WorldInfo',
      children=[
      WorldInfo(info=[" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "],title='HANIM 200x Default Joint Centers, LOA3')]),
    #  TODO move viewpoints to be internal to HAnimHumanoid 
    #  Viewpoint centerOfRotation="0 0.9149 0.0016" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human. 
    Viewpoint(centerOfRotation=(0,0.9149,0.0016),description='Humanoid LOA 3 Front',position=(0,0.4,4)),
    Viewpoint(centerOfRotation=(0,0.9149,0.0016),description='Humanoid LOA 3 Front Close',position=(0,0.8,2)),
    Viewpoint(centerOfRotation=(0,0.9149,0.0016),description='Humanoid LOA 3 Front Closer',position=(0,1.2,1)),
    Viewpoint(centerOfRotation=(0,1.5,0.0016),description='Humanoid LOA 3 Front Face',position=(0,1.63,1)),
    Viewpoint(centerOfRotation=(0,0.9149,0.0016),description='Humanoid LOA 3 Right Side',orientation=(0,1,0,1.5708),position=(2.6,0.8,0)),
    Viewpoint(centerOfRotation=(0,0.9149,0.0016),description='Humanoid LOA 3 Right Side Close',orientation=(0,1,0,1.2),position=(1,0.8,0.5)),
    Viewpoint(centerOfRotation=(0,0.9149,0.0016),description='Humanoid LOA 3 Left Side Close',orientation=(0,1,0,-1.2),position=(-1,0.8,0.5)),
    Viewpoint(centerOfRotation=(0,0.9149,0.0016),description='Humanoid LOA 3 Left Side',orientation=(0,1,0,-1.5708),position=(-2.6,0.8,0)),
    Viewpoint(centerOfRotation=(0,0.9149,0.0016),description='Humanoid LOA 3 Top',orientation=(1,0,0,-1.5708),position=(0,3.5,0)),
    HAnimHumanoid(DEF='hanim_humanoid',loa=3,name='humanoid',version='2.0',
      metadata=MetadataSet(name='HAnimHumanoid.info',reference='https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid',
        value=[
        MetadataString(name='authorName',value=['Matthew T. Beitler Joe D. Williams Don Brutzman']),
        MetadataString(name='authorEmail',value=['HAnim@web3D.org']),
        MetadataString(name='copyright',value=['none']),
        MetadataString(name='creationDate',value=['12 May 1999']),
        MetadataFloat(name='height',value=[1.7504]),
        MetadataString(name='humanoidVersion',value=['2.0']),
        MetadataString(name='usageRestrictions',value=['none'])]),
      skeleton=[
      HAnimJoint(DEF='hanim_humanoid_root',center=(0,0.824,0.0277),name='humanoid_root',ulimit=[0,0,0],llimit=[0,0,0],
        children=[
        HAnimSegment(DEF='hanim_sacrum',name='sacrum',
          #  Visualization sphere for <HAnimJoint name='humanoid_root'/> is placed within <HAnimSegment name='sacrum'/> 
          children=[
          TouchSensor(description='HAnimJoint humanoid_root, HAnimSegment sacrum'),
          Transform(translation=(0,0.824,0.0277),
            children=[
            Shape(DEF='HAnimJointShape',
              geometry=Sphere(radius=0.006),
              appearance=Appearance(DEF='HAnimJointAppearance',
                material=Material(diffuseColor=(1,0.5,0),transparency=0.5)))]),
          #  HAnimSegment visualization line from current <HAnimJoint name='humanoid_root'/> to child <HAnimJoint name='sacroiliac'/> 
          Shape(
            geometry=LineSet(vertexCount=[2],
              coord=Coordinate(point=[(0,0.824,0.0277),(0,0.9149,0.0016)]),
              color=ColorRGBA(DEF='HAnimSegmentLineColorRGBA',color=[(1,1,0,1),(1,1,0,0.1)]))),
          #  HAnimSegment visualization line from current <HAnimJoint name='humanoid_root'/> to child <HAnimJoint name='vl5'/> 
          Shape(
            geometry=LineSet(vertexCount=[2],
              coord=Coordinate(point=[(0,0.824,0.0277),(0.0028,1.0568,-0.0776)]),
              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
        HAnimJoint(DEF='hanim_sacroiliac',center=(0,0.9149,0.0016),name='sacroiliac',ulimit=[0,0,0],llimit=[0,0,0],
          children=[
          HAnimSegment(DEF='hanim_pelvis',name='pelvis',
            #  Visualization sphere for <HAnimJoint name='sacroiliac'/> is placed within <HAnimSegment name='pelvis'/> 
            children=[
            TouchSensor(description='HAnimJoint sacroiliac, HAnimSegment pelvis'),
            Transform(translation=(0,0.9149,0.0016),
              children=[
              Shape(USE='HAnimJointShape')]),
            #  HAnimSegment visualization line from current <HAnimJoint name='sacroiliac'/> to child <HAnimJoint name='l_hip'/> 
            Shape(
              geometry=LineSet(vertexCount=[2],
                coord=Coordinate(point=[(0,0.9149,0.0016),(0.0961,0.9124,-0.0001)]),
                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
            #  HAnimSegment visualization line from current <HAnimJoint name='sacroiliac'/> to child <HAnimJoint name='r_hip'/> 
            Shape(
              geometry=LineSet(vertexCount=[2],
                coord=Coordinate(point=[(0,0.9149,0.0016),(-0.0961,0.9124,-0.0001)]),
                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
            #  HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_iliocristale_pt'/> 
            Shape(
              geometry=LineSet(vertexCount=[2],
                coord=Coordinate(point=[(0,0.9149,0.0016),(-0.1525,1.0628,0.0035)]),
                color=ColorRGBA(DEF='HAnimSiteLineColorRGBA',color=[(1,0,0,1),(1,0,0,0.1)]))),
            #  HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_trochanterion_pt'/> 
            Shape(
              geometry=LineSet(vertexCount=[2],
                coord=Coordinate(point=[(0,0.9149,0.0016),(-0.1689,0.8419,0.0352)]),
                color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
            #  HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_iliocristale_pt'/> 
            Shape(
              geometry=LineSet(vertexCount=[2],
                coord=Coordinate(point=[(0,0.9149,0.0016),(0.1612,1.0537,0.0008)]),
                color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
            #  HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_trochanterion_pt'/> 
            Shape(
              geometry=LineSet(vertexCount=[2],
                coord=Coordinate(point=[(0,0.9149,0.0016),(0.1677,0.8336,0.0303)]),
                color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
            #  HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_asis_pt'/> 
            Shape(
              geometry=LineSet(vertexCount=[2],
                coord=Coordinate(point=[(0,0.9149,0.0016),(-0.0887,1.0021,0.1112)]),
                color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
            #  HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_asis_pt'/> 
            Shape(
              geometry=LineSet(vertexCount=[2],
                coord=Coordinate(point=[(0,0.9149,0.0016),(0.0925,0.9983,0.1052)]),
                color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
            #  HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_psis_pt'/> 
            Shape(
              geometry=LineSet(vertexCount=[2],
                coord=Coordinate(point=[(0,0.9149,0.0016),(-0.0716,1.019,-0.1138)]),
                color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
            #  HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_psis_pt'/> 
            Shape(
              geometry=LineSet(vertexCount=[2],
                coord=Coordinate(point=[(0,0.9149,0.0016),(0.0774,1.019,-0.1151)]),
                color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
            #  HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='crotch_pt'/> 
            Shape(
              geometry=LineSet(vertexCount=[2],
                coord=Coordinate(point=[(0,0.9149,0.0016),(0.0034,0.8266,0.0257)]),
                color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
            HAnimSite(DEF='hanim_r_iliocristale_pt',name='r_iliocristale_pt',translation=(-0.1525,1.0628,0.0035),
              #  HAnimSite visualization shape 
              children=[
              TouchSensor(description='HAnimSite r_iliocristale_pt'),
              Shape(DEF='HAnimSiteShape',
                geometry=IndexedFaceSet(DEF='DiamondIFS',coordIndex=[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1],creaseAngle=0.5,solid=False,
                  coord=Coordinate(point=[(0,0.008,0),(-0.008,0,0),(0,0,0.008),(0.008,0,0),(0,0,-0.008),(0,-0.008,0)])),
                appearance=Appearance(
                  material=Material(diffuseColor=(1,0,0))))]),
            HAnimSite(DEF='hanim_r_trochanterion_pt',name='r_trochanterion_pt',translation=(-0.1689,0.8419,0.0352),
              #  HAnimSite visualization shape 
              children=[
              TouchSensor(description='HAnimSite r_trochanterion_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='hanim_l_iliocristale_pt',name='l_iliocristale_pt',translation=(0.1612,1.0537,0.0008),
              #  HAnimSite visualization shape 
              children=[
              TouchSensor(description='HAnimSite l_iliocristale_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='hanim_l_trochanterion_pt',name='l_trochanterion_pt',translation=(0.1677,0.8336,0.0303),
              #  HAnimSite visualization shape 
              children=[
              TouchSensor(description='HAnimSite l_trochanterion_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='hanim_r_asis_pt',name='r_asis_pt',translation=(-0.0887,1.0021,0.1112),
              #  HAnimSite visualization shape 
              children=[
              TouchSensor(description='HAnimSite r_asis_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='hanim_l_asis_pt',name='l_asis_pt',translation=(0.0925,0.9983,0.1052),
              #  HAnimSite visualization shape 
              children=[
              TouchSensor(description='HAnimSite l_asis_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='hanim_r_psis_pt',name='r_psis_pt',translation=(-0.0716,1.019,-0.1138),
              #  HAnimSite visualization shape 
              children=[
              TouchSensor(description='HAnimSite r_psis_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='hanim_l_psis_pt',name='l_psis_pt',translation=(0.0774,1.019,-0.1151),
              #  HAnimSite visualization shape 
              children=[
              TouchSensor(description='HAnimSite l_psis_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='hanim_crotch_pt',name='crotch_pt',translation=(0.0034,0.8266,0.0257),
              #  HAnimSite visualization shape 
              children=[
              TouchSensor(description='HAnimSite crotch_pt'),
              Shape(USE='HAnimSiteShape')])]),
          HAnimJoint(DEF='hanim_l_hip',center=(0.0961,0.9124,-0.0001),name='l_hip',ulimit=[0,0,0],llimit=[0,0,0],
            children=[
            HAnimSegment(DEF='hanim_l_thigh',name='l_thigh',
              #  Visualization sphere for <HAnimJoint name='l_hip'/> is placed within <HAnimSegment name='l_thigh'/> 
              children=[
              TouchSensor(description='HAnimJoint l_hip, HAnimSegment l_thigh'),
              Transform(translation=(0.0961,0.9124,-0.0001),
                children=[
                Shape(USE='HAnimJointShape')]),
              #  HAnimSegment visualization line from current <HAnimJoint name='l_hip'/> to child <HAnimJoint name='l_knee'/> 
              Shape(
                geometry=LineSet(vertexCount=[2],
                  coord=Coordinate(point=[(0.0961,0.9124,-0.0001),(0.104,0.4867,0.0308)]),
                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
              #  HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_knee_crease_pt'/> 
              Shape(
                geometry=LineSet(vertexCount=[2],
                  coord=Coordinate(point=[(0.0961,0.9124,-0.0001),(0.0993,0.4881,-0.0309)]),
                  color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
              #  HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_lateral_epicn_pt'/> 
              Shape(
                geometry=LineSet(vertexCount=[2],
                  coord=Coordinate(point=[(0.0961,0.9124,-0.0001),(0.1598,0.4967,0.0297)]),
                  color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
              #  HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_medial_epicn_pt'/> 
              Shape(
                geometry=LineSet(vertexCount=[2],
                  coord=Coordinate(point=[(0.0961,0.9124,-0.0001),(0.0398,0.4946,0.0303)]),
                  color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
              HAnimSite(DEF='hanim_l_knee_crease_pt',name='l_knee_crease_pt',translation=(0.0993,0.4881,-0.0309),
                #  HAnimSite visualization shape 
                children=[
                TouchSensor(description='HAnimSite l_knee_crease_pt'),
                Shape(USE='HAnimSiteShape')]),
              HAnimSite(DEF='hanim_l_femoral_lateral_epicondyle_pt',name='l_femoral_lateral_epicondyle_pt',translation=(0.1598,0.4967,0.0297),
                #  HAnimSite visualization shape 
                children=[
                TouchSensor(description='HAnimSite l_femoral_lateral_epicn_pt'),
                Shape(USE='HAnimSiteShape')]),
              HAnimSite(DEF='hanim_l_femoral_medial_epicondyle_pt',name='l_femoral_medial_epicondyle_pt',translation=(0.0398,0.4946,0.0303),
                #  HAnimSite visualization shape 
                children=[
                TouchSensor(description='HAnimSite l_femoral_medial_epicn_pt'),
                Shape(USE='HAnimSiteShape')])]),
            HAnimJoint(DEF='hanim_l_knee',center=(0.104,0.4867,0.0308),name='l_knee',ulimit=[0,0,0],llimit=[0,0,0],
              children=[
              HAnimSegment(DEF='hanim_l_calf',name='l_calf',
                #  Visualization sphere for <HAnimJoint name='l_knee'/> is placed within <HAnimSegment name='l_calf'/> 
                children=[
                TouchSensor(description='HAnimJoint l_knee, HAnimSegment l_calf'),
                Transform(translation=(0.104,0.4867,0.0308),
                  children=[
                  Shape(USE='HAnimJointShape')]),
                #  HAnimSegment visualization line from current <HAnimJoint name='l_knee'/> to child <HAnimJoint name='l_talocrural'/> 
                Shape(
                  geometry=LineSet(vertexCount=[2],
                    coord=Coordinate(point=[(0.104,0.4867,0.0308),(0.1101,0.0656,-0.0736)]),
                    color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
              HAnimJoint(DEF='hanim_l_talocrural',center=(0.1101,0.0656,-0.0736),name='l_talocrural',ulimit=[0,0,0],llimit=[0,0,0],
                children=[
                HAnimSegment(DEF='hanim_l_talus',name='l_talus',
                  #  Visualization sphere for <HAnimJoint name='l_talocrural'/> is placed within <HAnimSegment name='l_talus'/> 
                  children=[
                  TouchSensor(description='HAnimJoint l_talocrural, HAnimSegment l_talus'),
                  Transform(translation=(0.1101,0.0656,-0.0736),
                    children=[
                    Shape(USE='HAnimJointShape')]),
                  #  HAnimSegment visualization line from current <HAnimJoint name='l_talocrural'/> to child <HAnimJoint name='l_tarsometatarsal_2'/> 
                  Shape(
                    geometry=LineSet(vertexCount=[2],
                      coord=Coordinate(point=[(0.1101,0.0656,-0.0736),(0.1086,0.0001,-0.0368)]),
                      color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                  #  HAnimSite visualization line segment from ancestor <HAnimJoint name='l_talocrural'/> to <HAnimSite name='l_lateral_malleolus_pt'/> 
                  Shape(
                    geometry=LineSet(vertexCount=[2],
                      coord=Coordinate(point=[(0.1101,0.0656,-0.0736),(0.1308,0.0597,-0.1032)]),
                      color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                  #  HAnimSite visualization line segment from ancestor <HAnimJoint name='l_talocrural'/> to <HAnimSite name='l_medial_malleolus_pt'/> 
                  Shape(
                    geometry=LineSet(vertexCount=[2],
                      coord=Coordinate(point=[(0.1101,0.0656,-0.0736),(0.089,0.0716,-0.0881)]),
                      color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                  #  HAnimSite visualization line segment from ancestor <HAnimJoint name='l_talocrural'/> to <HAnimSite name='l_sphyrion_pt'/> 
                  Shape(
                    geometry=LineSet(vertexCount=[2],
                      coord=Coordinate(point=[(0.1101,0.0656,-0.0736),(0.089,0.0575,-0.0943)]),
                      color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                  #  HAnimSite visualization line segment from ancestor <HAnimJoint name='l_talocrural'/> to <HAnimSite name='l_calcaneous_post_pt'/> 
                  Shape(
                    geometry=LineSet(vertexCount=[2],
                      coord=Coordinate(point=[(0.1101,0.0656,-0.0736),(0.0974,0.0259,-0.1171)]),
                      color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                  HAnimSite(DEF='hanim_l_lateral_malleolus_pt',name='l_lateral_malleolus_pt',translation=(0.1308,0.0597,-0.1032),
                    #  HAnimSite visualization shape 
                    children=[
                    TouchSensor(description='HAnimSite l_lateral_malleolus_pt'),
                    Shape(USE='HAnimSiteShape')]),
                  HAnimSite(DEF='hanim_l_medial_malleolus_pt',name='l_medial_malleolus_pt',translation=(0.089,0.0716,-0.0881),
                    #  HAnimSite visualization shape 
                    children=[
                    TouchSensor(description='HAnimSite l_medial_malleolus_pt'),
                    Shape(USE='HAnimSiteShape')]),
                  HAnimSite(DEF='hanim_l_sphyrion_pt',name='l_sphyrion_pt',translation=(0.089,0.0575,-0.0943),
                    #  HAnimSite visualization shape 
                    children=[
                    TouchSensor(description='HAnimSite l_sphyrion_pt'),
                    Shape(USE='HAnimSiteShape')]),
                  HAnimSite(DEF='hanim_l_calcaneus_posterior_pt',name='l_calcaneus_posterior_pt',translation=(0.0974,0.0259,-0.1171),
                    #  HAnimSite visualization shape 
                    children=[
                    TouchSensor(description='HAnimSite l_calcaneous_post_pt'),
                    Shape(USE='HAnimSiteShape')])]),
                HAnimJoint(DEF='hanim_l_tarsometatarsal_2',center=(0.1086,0.0001,-0.0368),name='l_tarsometatarsal_2',ulimit=[0,0,0],llimit=[0,0,0],
                  children=[
                  HAnimSegment(DEF='hanim_l_metatarsal_2',name='l_metatarsal_2',
                    #  Visualization sphere for <HAnimJoint name='l_tarsometatarsal_2'/> is placed within <HAnimSegment name='l_metatarsal_2'/> 
                    children=[
                    TouchSensor(description='HAnimJoint l_tarsometatarsal_2, HAnimSegment l_metatarsal_2'),
                    Transform(translation=(0.1086,0.0001,-0.0368),
                      children=[
                      Shape(USE='HAnimJointShape')]),
                    #  HAnimSegment visualization line from current <HAnimJoint name='l_tarsometatarsal_2'/> to child <HAnimJoint name='l_metatarsophalangeal_2'/> 
                    Shape(
                      geometry=LineSet(vertexCount=[2],
                        coord=Coordinate(point=[(0.1086,0.0001,-0.0368),(0.1086,0.0001,0.0368)]),
                        color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                  HAnimJoint(DEF='hanim_l_metatarsophalangeal_2',center=(0.1086,0.0001,0.0368),name='l_metatarsophalangeal_2',ulimit=[0,0,0],llimit=[0,0,0],
                    children=[
                    HAnimSegment(DEF='hanim_l_tarsal_proximal_phalanx_2',name='l_tarsal_proximal_phalanx_2',
                      #  Visualization sphere for <HAnimJoint name='l_metatarsophalangeal_2'/> is placed within <HAnimSegment name='l_tarsal_proximal_phalanx_2'/> 
                      children=[
                      TouchSensor(description='HAnimJoint l_metatarsophalangeal_2, HAnimSegment l_tarsal_proximal_phalanx_2'),
                      Transform(translation=(0.1086,0.0001,0.0368),
                        children=[
                        Shape(USE='HAnimJointShape')]),
                      #  HAnimSegment visualization line from current <HAnimJoint name='l_metatarsophalangeal_2'/> to child <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/> 
                      Shape(
                        geometry=LineSet(vertexCount=[2],
                          coord=Coordinate(point=[(0.1086,0.0001,0.0368),(0.1086,0,0.0762)]),
                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                      #  HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsophalangeal_2'/> to <HAnimSite name='l_metatarsal_pha1_pt'/> 
                      Shape(
                        geometry=LineSet(vertexCount=[2],
                          coord=Coordinate(point=[(0.1086,0.0001,0.0368),(0.0816,0.0232,0.0106)]),
                          color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                      HAnimSite(DEF='hanim_l_metatarsal_phalanx_1_pt',name='l_metatarsal_phalanx_1_pt',translation=(0.0816,0.0232,0.0106),
                        #  HAnimSite visualization shape 
                        children=[
                        TouchSensor(description='HAnimSite l_metatarsal_pha1_pt'),
                        Shape(USE='HAnimSiteShape')])]),
                    HAnimJoint(DEF='hanim_l_tarsal_distal_interphalangeal_2',center=(0.1086,0,0.0762),name='l_tarsal_distal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0],
                      children=[
                      HAnimSegment(DEF='hanim_l_tarsal_distal_phalanx_2',name='l_tarsal_distal_phalanx_2',
                        #  Visualization sphere for <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/> is placed within <HAnimSegment name='l_tarsal_distal_phalanx_2'/> 
                        children=[
                        TouchSensor(description='HAnimJoint l_tarsal_distal_interphalangeal_2, HAnimSegment l_tarsal_distal_phalanx_2'),
                        Transform(translation=(0.1086,0,0.0762),
                          children=[
                          Shape(USE='HAnimJointShape')]),
                        #  HAnimSite visualization line segment from ancestor <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='l_forefoot_tip'/> 
                        Shape(
                          geometry=LineSet(vertexCount=[2],
                            coord=Coordinate(point=[(0.1086,0,0.0762),(0.1354,0.0016,0.1476)]),
                            color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                        #  HAnimSite visualization line segment from ancestor <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='l_metatarsal_pha5_pt'/> 
                        Shape(
                          geometry=LineSet(vertexCount=[2],
                            coord=Coordinate(point=[(0.1086,0,0.0762),(0.1825,0.007,0.0928)]),
                            color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                        #  HAnimSite visualization line segment from ancestor <HAnimJoint name='l_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='l_digit2_pt'/> 
                        Shape(
                          geometry=LineSet(vertexCount=[2],
                            coord=Coordinate(point=[(0.1086,0,0.0762),(0.1195,0.0079,0.1433)]),
                            color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                        HAnimSite(DEF='hanim_l_forefoot_tip_pt',name='l_forefoot_tip_pt',translation=(0.1354,0.0016,0.1476),
                          #  HAnimSite visualization shape 
                          children=[
                          TouchSensor(description='HAnimSite l_forefoot_tip'),
                          Shape(USE='HAnimSiteShape')]),
                        HAnimSite(DEF='hanim_l_metatarsal_phalanx_5_pt',name='l_metatarsal_phalanx_5_pt',translation=(0.1825,0.007,0.0928),
                          #  HAnimSite visualization shape 
                          children=[
                          TouchSensor(description='HAnimSite l_metatarsal_pha5_pt'),
                          Shape(USE='HAnimSiteShape')]),
                        HAnimSite(DEF='hanim_l_tarsal_distal_phalanx_2_pt',name='l_tarsal_distal_phalanx_2_pt',translation=(0.1195,0.0079,0.1433),
                          #  HAnimSite visualization shape 
                          children=[
                          TouchSensor(description='HAnimSite l_digit2_pt'),
                          Shape(USE='HAnimSiteShape')])])])])])])])]),
          HAnimJoint(DEF='hanim_r_hip',center=(-0.0961,0.9124,-0.0001),name='r_hip',ulimit=[0,0,0],llimit=[0,0,0],
            children=[
            HAnimSegment(DEF='hanim_r_thigh',name='r_thigh',
              #  Visualization sphere for <HAnimJoint name='r_hip'/> is placed within <HAnimSegment name='r_thigh'/> 
              children=[
              TouchSensor(description='HAnimJoint r_hip, HAnimSegment r_thigh'),
              Transform(translation=(-0.0961,0.9124,-0.0001),
                children=[
                Shape(USE='HAnimJointShape')]),
              #  HAnimSegment visualization line from current <HAnimJoint name='r_hip'/> to child <HAnimJoint name='r_knee'/> 
              Shape(
                geometry=LineSet(vertexCount=[2],
                  coord=Coordinate(point=[(-0.0961,0.9124,-0.0001),(-0.104,0.4867,0.0308)]),
                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
              #  HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_knee_crease_pt'/> 
              Shape(
                geometry=LineSet(vertexCount=[2],
                  coord=Coordinate(point=[(-0.0961,0.9124,-0.0001),(-0.0825,0.4932,-0.0326)]),
                  color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
              #  HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_lateral_epicn_pt'/> 
              Shape(
                geometry=LineSet(vertexCount=[2],
                  coord=Coordinate(point=[(-0.0961,0.9124,-0.0001),(-0.1421,0.4992,0.031)]),
                  color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
              #  HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_medial_epicn_pt'/> 
              Shape(
                geometry=LineSet(vertexCount=[2],
                  coord=Coordinate(point=[(-0.0961,0.9124,-0.0001),(-0.0221,0.5014,0.0289)]),
                  color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
              HAnimSite(DEF='hanim_r_knee_crease_pt',name='r_knee_crease_pt',translation=(-0.0825,0.4932,-0.0326),
                #  HAnimSite visualization shape 
                children=[
                TouchSensor(description='HAnimSite r_knee_crease_pt'),
                Shape(USE='HAnimSiteShape')]),
              HAnimSite(DEF='hanim_r_femoral_lateral_epicondyle_pt',name='r_femoral_lateral_epicondyle_pt',translation=(-0.1421,0.4992,0.031),
                #  HAnimSite visualization shape 
                children=[
                TouchSensor(description='HAnimSite r_femoral_lateral_epicn_pt'),
                Shape(USE='HAnimSiteShape')]),
              HAnimSite(DEF='hanim_r_femoral_medial_epicondyle_pt',name='r_femoral_medial_epicondyle_pt',translation=(-0.0221,0.5014,0.0289),
                #  HAnimSite visualization shape 
                children=[
                TouchSensor(description='HAnimSite r_femoral_medial_epicn_pt'),
                Shape(USE='HAnimSiteShape')])]),
            HAnimJoint(DEF='hanim_r_knee',center=(-0.104,0.4867,0.0308),name='r_knee',ulimit=[0,0,0],llimit=[0,0,0],
              children=[
              HAnimSegment(DEF='hanim_r_calf',name='r_calf',
                #  Visualization sphere for <HAnimJoint name='r_knee'/> is placed within <HAnimSegment name='r_calf'/> 
                children=[
                TouchSensor(description='HAnimJoint r_knee, HAnimSegment r_calf'),
                Transform(translation=(-0.104,0.4867,0.0308),
                  children=[
                  Shape(USE='HAnimJointShape')]),
                #  HAnimSegment visualization line from current <HAnimJoint name='r_knee'/> to child <HAnimJoint name='r_talocrural'/> 
                Shape(
                  geometry=LineSet(vertexCount=[2],
                    coord=Coordinate(point=[(-0.104,0.4867,0.0308),(-0.1101,0.0656,-0.0736)]),
                    color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
              HAnimJoint(DEF='hanim_r_talocrural',center=(-0.1101,0.0656,-0.0736),name='r_talocrural',ulimit=[0,0,0],llimit=[0,0,0],
                children=[
                HAnimSegment(DEF='hanim_r_talus',name='r_talus',
                  #  Visualization sphere for <HAnimJoint name='r_talocrural'/> is placed within <HAnimSegment name='r_talus'/> 
                  children=[
                  TouchSensor(description='HAnimJoint r_talocrural, HAnimSegment r_talus'),
                  Transform(translation=(-0.1101,0.0656,-0.0736),
                    children=[
                    Shape(USE='HAnimJointShape')]),
                  #  HAnimSegment visualization line from current <HAnimJoint name='r_talocrural'/> to child <HAnimJoint name='r_tarsometatarsal_2'/> 
                  Shape(
                    geometry=LineSet(vertexCount=[2],
                      coord=Coordinate(point=[(-0.1101,0.0656,-0.0736),(-0.1086,0.0001,-0.0368)]),
                      color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                  #  HAnimSite visualization line segment from ancestor <HAnimJoint name='r_talocrural'/> to <HAnimSite name='r_lateral_malleolus_pt'/> 
                  Shape(
                    geometry=LineSet(vertexCount=[2],
                      coord=Coordinate(point=[(-0.1101,0.0656,-0.0736),(-0.1006,0.0658,-0.1075)]),
                      color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                  #  HAnimSite visualization line segment from ancestor <HAnimJoint name='r_talocrural'/> to <HAnimSite name='r_medial_malleolus_pt'/> 
                  Shape(
                    geometry=LineSet(vertexCount=[2],
                      coord=Coordinate(point=[(-0.1101,0.0656,-0.0736),(-0.0591,0.076,-0.0928)]),
                      color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                  #  HAnimSite visualization line segment from ancestor <HAnimJoint name='r_talocrural'/> to <HAnimSite name='r_sphyrion_pt'/> 
                  Shape(
                    geometry=LineSet(vertexCount=[2],
                      coord=Coordinate(point=[(-0.1101,0.0656,-0.0736),(-0.0603,0.061,-0.1002)]),
                      color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                  #  HAnimSite visualization line segment from ancestor <HAnimJoint name='r_talocrural'/> to <HAnimSite name='r_calcaneous_post_pt'/> 
                  Shape(
                    geometry=LineSet(vertexCount=[2],
                      coord=Coordinate(point=[(-0.1101,0.0656,-0.0736),(-0.0692,0.0297,-0.1221)]),
                      color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                  HAnimSite(DEF='hanim_r_lateral_malleolus_pt',name='r_lateral_malleolus_pt',translation=(-0.1006,0.0658,-0.1075),
                    #  HAnimSite visualization shape 
                    children=[
                    TouchSensor(description='HAnimSite r_lateral_malleolus_pt'),
                    Shape(USE='HAnimSiteShape')]),
                  HAnimSite(DEF='hanim_r_medial_malleolus_pt',name='r_medial_malleolus_pt',translation=(-0.0591,0.076,-0.0928),
                    #  HAnimSite visualization shape 
                    children=[
                    TouchSensor(description='HAnimSite r_medial_malleolus_pt'),
                    Shape(USE='HAnimSiteShape')]),
                  HAnimSite(DEF='hanim_r_sphyrion_pt',name='r_sphyrion_pt',translation=(-0.0603,0.061,-0.1002),
                    #  HAnimSite visualization shape 
                    children=[
                    TouchSensor(description='HAnimSite r_sphyrion_pt'),
                    Shape(USE='HAnimSiteShape')]),
                  HAnimSite(DEF='hanim_r_calcaneus_posterior_pt',name='r_calcaneus_posterior_pt',translation=(-0.0692,0.0297,-0.1221),
                    #  HAnimSite visualization shape 
                    children=[
                    TouchSensor(description='HAnimSite r_calcaneous_post_pt'),
                    Shape(USE='HAnimSiteShape')])]),
                HAnimJoint(DEF='hanim_r_tarsometatarsal_2',center=(-0.1086,0.0001,-0.0368),name='r_tarsometatarsal_2',ulimit=[0,0,0],llimit=[0,0,0],
                  children=[
                  HAnimSegment(DEF='hanim_r_metatarsal_2',name='r_metatarsal_2',
                    #  Visualization sphere for <HAnimJoint name='r_tarsometatarsal_2'/> is placed within <HAnimSegment name='r_metatarsal_2'/> 
                    children=[
                    TouchSensor(description='HAnimJoint r_tarsometatarsal_2, HAnimSegment r_metatarsal_2'),
                    Transform(translation=(-0.1086,0.0001,-0.0368),
                      children=[
                      Shape(USE='HAnimJointShape')]),
                    #  HAnimSegment visualization line from current <HAnimJoint name='r_tarsometatarsal_2'/> to child <HAnimJoint name='r_metatarsophalangeal_2'/> 
                    Shape(
                      geometry=LineSet(vertexCount=[2],
                        coord=Coordinate(point=[(-0.1086,0.0001,-0.0368),(-0.1086,0.0001,0.0368)]),
                        color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                  HAnimJoint(DEF='hanim_r_metatarsophalangeal_2',center=(-0.1086,0.0001,0.0368),name='r_metatarsophalangeal_2',ulimit=[0,0,0],llimit=[0,0,0],
                    children=[
                    HAnimSegment(DEF='hanim_r_tarsal_proximal_phalanx_2',name='r_tarsal_proximal_phalanx_2',
                      #  Visualization sphere for <HAnimJoint name='r_metatarsophalangeal_2'/> is placed within <HAnimSegment name='r_tarsal_proximal_phalanx_2'/> 
                      children=[
                      TouchSensor(description='HAnimJoint r_metatarsophalangeal_2, HAnimSegment r_tarsal_proximal_phalanx_2'),
                      Transform(translation=(-0.1086,0.0001,0.0368),
                        children=[
                        Shape(USE='HAnimJointShape')]),
                      #  HAnimSegment visualization line from current <HAnimJoint name='r_metatarsophalangeal_2'/> to child <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/> 
                      Shape(
                        geometry=LineSet(vertexCount=[2],
                          coord=Coordinate(point=[(-0.1086,0.0001,0.0368),(-0.1086,0,0.0762)]),
                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                      #  HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsophalangeal_2'/> to <HAnimSite name='r_metatarsal_pha1_pt'/> 
                      Shape(
                        geometry=LineSet(vertexCount=[2],
                          coord=Coordinate(point=[(-0.1086,0.0001,0.0368),(-0.0521,0.026,0.0127)]),
                          color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                      HAnimSite(DEF='hanim_r_metatarsal_phalanx_1_pt',name='r_metatarsal_phalanx_1_pt',translation=(-0.0521,0.026,0.0127),
                        #  HAnimSite visualization shape 
                        children=[
                        TouchSensor(description='HAnimSite r_metatarsal_pha1_pt'),
                        Shape(USE='HAnimSiteShape')])]),
                    HAnimJoint(DEF='hanim_r_tarsal_distal_interphalangeal_2',center=(-0.1086,0,0.0762),name='r_tarsal_distal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0],
                      children=[
                      HAnimSegment(DEF='hanim_r_tarsal_distal_phalanx_2',name='r_tarsal_distal_phalanx_2',
                        #  Visualization sphere for <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/> is placed within <HAnimSegment name='r_tarsal_distal_phalanx_2'/> 
                        children=[
                        TouchSensor(description='HAnimJoint r_tarsal_distal_interphalangeal_2, HAnimSegment r_tarsal_distal_phalanx_2'),
                        Transform(translation=(-0.1086,0,0.0762),
                          children=[
                          Shape(USE='HAnimJointShape')]),
                        #  HAnimSite visualization line segment from ancestor <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='r_forefoot_tip'/> 
                        Shape(
                          geometry=LineSet(vertexCount=[2],
                            coord=Coordinate(point=[(-0.1086,0,0.0762),(-0.1043,0.0227,0.145)]),
                            color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                        #  HAnimSite visualization line segment from ancestor <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='r_metatarsal_pha5_pt'/> 
                        Shape(
                          geometry=LineSet(vertexCount=[2],
                            coord=Coordinate(point=[(-0.1086,0,0.0762),(-0.1523,0.0166,0.0895)]),
                            color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                        #  HAnimSite visualization line segment from ancestor <HAnimJoint name='r_tarsal_distal_interphalangeal_2'/> to <HAnimSite name='r_digit2_pt'/> 
                        Shape(
                          geometry=LineSet(vertexCount=[2],
                            coord=Coordinate(point=[(-0.1086,0,0.0762),(-0.0883,0.0134,0.1383)]),
                            color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                        HAnimSite(DEF='hanim_r_forefoot_tip_pt',name='r_forefoot_tip_pt',translation=(-0.1043,0.0227,0.145),
                          #  HAnimSite visualization shape 
                          children=[
                          TouchSensor(description='HAnimSite r_forefoot_tip'),
                          Shape(USE='HAnimSiteShape')]),
                        HAnimSite(DEF='hanim_r_metatarsal_phalanx_5_pt',name='r_metatarsal_phalanx_5_pt',translation=(-0.1523,0.0166,0.0895),
                          #  HAnimSite visualization shape 
                          children=[
                          TouchSensor(description='HAnimSite r_metatarsal_pha5_pt'),
                          Shape(USE='HAnimSiteShape')]),
                        HAnimSite(DEF='hanim_r_tarsal_distal_phalanx_2_pt',name='r_tarsal_distal_phalanx_2_pt',translation=(-0.0883,0.0134,0.1383),
                          #  HAnimSite visualization shape 
                          children=[
                          TouchSensor(description='HAnimSite r_digit2_pt'),
                          Shape(USE='HAnimSiteShape')])])])])])])])])]),
        HAnimJoint(DEF='hanim_vl5',center=(0.0028,1.0568,-0.0776),name='vl5',ulimit=[0,0,0],llimit=[0,0,0],
          children=[
          HAnimSegment(DEF='hanim_l5',name='l5',
            #  Visualization sphere for <HAnimJoint name='vl5'/> is placed within <HAnimSegment name='l5'/> 
            children=[
            TouchSensor(description='HAnimJoint vl5, HAnimSegment l5'),
            Transform(translation=(0.0028,1.0568,-0.0776),
              children=[
              Shape(USE='HAnimJointShape')]),
            #  HAnimSegment visualization line from current <HAnimJoint name='vl5'/> to child <HAnimJoint name='vl4'/> 
            Shape(
              geometry=LineSet(vertexCount=[2],
                coord=Coordinate(point=[(0.0028,1.0568,-0.0776),(0.0035,1.0925,-0.0787)]),
                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
            #  HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='waist_preferred_post_pt'/> 
            Shape(
              geometry=LineSet(vertexCount=[2],
                coord=Coordinate(point=[(0.0028,1.0568,-0.0776),(0,1.0915,-0.1091)]),
                color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
            #  HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='navel_pt'/> 
            Shape(
              geometry=LineSet(vertexCount=[2],
                coord=Coordinate(point=[(0.0028,1.0568,-0.0776),(0.0069,1.0966,0.1017)]),
                color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
            HAnimSite(DEF='hanim_waist_preferred_posterior_pt',name='waist_preferred_posterior_pt',translation=(0,1.0915,-0.1091),
              #  HAnimSite visualization shape 
              children=[
              TouchSensor(description='HAnimSite waist_preferred_post_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='hanim_navel_pt',name='navel_pt',translation=(0.0069,1.0966,0.1017),
              #  HAnimSite visualization shape 
              children=[
              TouchSensor(description='HAnimSite navel_pt'),
              Shape(USE='HAnimSiteShape')])]),
          HAnimJoint(DEF='hanim_vl4',center=(0.0035,1.0925,-0.0787),name='vl4',ulimit=[0,0,0],llimit=[0,0,0],
            children=[
            HAnimSegment(DEF='hanim_l4',name='l4',
              #  Visualization sphere for <HAnimJoint name='vl4'/> is placed within <HAnimSegment name='l4'/> 
              children=[
              TouchSensor(description='HAnimJoint vl4, HAnimSegment l4'),
              Transform(translation=(0.0035,1.0925,-0.0787),
                children=[
                Shape(USE='HAnimJointShape')]),
              #  HAnimSegment visualization line from current <HAnimJoint name='vl4'/> to child <HAnimJoint name='vl3'/> 
              Shape(
                geometry=LineSet(vertexCount=[2],
                  coord=Coordinate(point=[(0.0035,1.0925,-0.0787),(0.0041,1.1276,-0.0796)]),
                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
            HAnimJoint(DEF='hanim_vl3',center=(0.0041,1.1276,-0.0796),name='vl3',ulimit=[0,0,0],llimit=[0,0,0],
              children=[
              HAnimSegment(DEF='hanim_l3',name='l3',
                #  Visualization sphere for <HAnimJoint name='vl3'/> is placed within <HAnimSegment name='l3'/> 
                children=[
                TouchSensor(description='HAnimJoint vl3, HAnimSegment l3'),
                Transform(translation=(0.0041,1.1276,-0.0796),
                  children=[
                  Shape(USE='HAnimJointShape')]),
                #  HAnimSegment visualization line from current <HAnimJoint name='vl3'/> to child <HAnimJoint name='vl2'/> 
                Shape(
                  geometry=LineSet(vertexCount=[2],
                    coord=Coordinate(point=[(0.0041,1.1276,-0.0796),(0.0045,1.1546,-0.08)]),
                    color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
              HAnimJoint(DEF='hanim_vl2',center=(0.0045,1.1546,-0.08),name='vl2',ulimit=[0,0,0],llimit=[0,0,0],
                children=[
                HAnimSegment(DEF='hanim_l2',name='l2',
                  #  Visualization sphere for <HAnimJoint name='vl2'/> is placed within <HAnimSegment name='l2'/> 
                  children=[
                  TouchSensor(description='HAnimJoint vl2, HAnimSegment l2'),
                  Transform(translation=(0.0045,1.1546,-0.08),
                    children=[
                    Shape(USE='HAnimJointShape')]),
                  #  HAnimSegment visualization line from current <HAnimJoint name='vl2'/> to child <HAnimJoint name='vl1'/> 
                  Shape(
                    geometry=LineSet(vertexCount=[2],
                      coord=Coordinate(point=[(0.0045,1.1546,-0.08),(0.0048,1.1912,-0.0805)]),
                      color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                  #  HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='r_rib10_pt'/> 
                  Shape(
                    geometry=LineSet(vertexCount=[2],
                      coord=Coordinate(point=[(0.0045,1.1546,-0.08),(-0.0711,1.1941,0.1016)]),
                      color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                  #  HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='l_rib10_pt'/> 
                  Shape(
                    geometry=LineSet(vertexCount=[2],
                      coord=Coordinate(point=[(0.0045,1.1546,-0.08),(0.0871,1.1925,0.0992)]),
                      color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                  #  HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='rib10_midspine_pt'/> 
                  Shape(
                    geometry=LineSet(vertexCount=[2],
                      coord=Coordinate(point=[(0.0045,1.1546,-0.08),(0.0049,1.1908,-0.1113)]),
                      color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                  HAnimSite(DEF='hanim_r_rib10_pt',name='r_rib10_pt',translation=(-0.0711,1.1941,0.1016),
                    #  HAnimSite visualization shape 
                    children=[
                    TouchSensor(description='HAnimSite r_rib10_pt'),
                    Shape(USE='HAnimSiteShape')]),
                  HAnimSite(DEF='hanim_l_rib10_pt',name='l_rib10_pt',translation=(0.0871,1.1925,0.0992),
                    #  HAnimSite visualization shape 
                    children=[
                    TouchSensor(description='HAnimSite l_rib10_pt'),
                    Shape(USE='HAnimSiteShape')]),
                  HAnimSite(DEF='hanim_rib10_midspine_pt',name='rib10_midspine_pt',translation=(0.0049,1.1908,-0.1113),
                    #  HAnimSite visualization shape 
                    children=[
                    TouchSensor(description='HAnimSite rib10_midspine_pt'),
                    Shape(USE='HAnimSiteShape')])]),
                HAnimJoint(DEF='hanim_vl1',center=(0.0048,1.1912,-0.0805),name='vl1',ulimit=[0,0,0],llimit=[0,0,0],
                  children=[
                  HAnimSegment(DEF='hanim_l1',name='l1',
                    #  Visualization sphere for <HAnimJoint name='vl1'/> is placed within <HAnimSegment name='l1'/> 
                    children=[
                    TouchSensor(description='HAnimJoint vl1, HAnimSegment l1'),
                    Transform(translation=(0.0048,1.1912,-0.0805),
                      children=[
                      Shape(USE='HAnimJointShape')]),
                    #  HAnimSegment visualization line from current <HAnimJoint name='vl1'/> to child <HAnimJoint name='vt12'/> 
                    Shape(
                      geometry=LineSet(vertexCount=[2],
                        coord=Coordinate(point=[(0.0048,1.1912,-0.0805),(0.0051,1.2278,-0.0808)]),
                        color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                  HAnimJoint(DEF='hanim_vt12',center=(0.0051,1.2278,-0.0808),name='vt12',ulimit=[0,0,0],llimit=[0,0,0],
                    children=[
                    HAnimSegment(DEF='hanim_t12',name='t12',
                      #  Visualization sphere for <HAnimJoint name='vt12'/> is placed within <HAnimSegment name='t12'/> 
                      children=[
                      TouchSensor(description='HAnimJoint vt12, HAnimSegment t12'),
                      Transform(translation=(0.0051,1.2278,-0.0808),
                        children=[
                        Shape(USE='HAnimJointShape')]),
                      #  HAnimSegment visualization line from current <HAnimJoint name='vt12'/> to child <HAnimJoint name='vt11'/> 
                      Shape(
                        geometry=LineSet(vertexCount=[2],
                          coord=Coordinate(point=[(0.0051,1.2278,-0.0808),(0.0053,1.2679,-0.081)]),
                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                    HAnimJoint(DEF='hanim_vt11',center=(0.0053,1.2679,-0.081),name='vt11',ulimit=[0,0,0],llimit=[0,0,0],
                      children=[
                      HAnimSegment(DEF='hanim_t11',name='t11',
                        #  Visualization sphere for <HAnimJoint name='vt11'/> is placed within <HAnimSegment name='t11'/> 
                        children=[
                        TouchSensor(description='HAnimJoint vt11, HAnimSegment t11'),
                        Transform(translation=(0.0053,1.2679,-0.081),
                          children=[
                          Shape(USE='HAnimJointShape')]),
                        #  HAnimSegment visualization line from current <HAnimJoint name='vt11'/> to child <HAnimJoint name='vt10'/> 
                        Shape(
                          geometry=LineSet(vertexCount=[2],
                            coord=Coordinate(point=[(0.0053,1.2679,-0.081),(0.0056,1.2848,-0.0822)]),
                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                      HAnimJoint(DEF='hanim_vt10',center=(0.0056,1.2848,-0.0822),name='vt10',ulimit=[0,0,0],llimit=[0,0,0],
                        children=[
                        HAnimSegment(DEF='hanim_t10',name='t10',
                          #  Visualization sphere for <HAnimJoint name='vt10'/> is placed within <HAnimSegment name='t10'/> 
                          children=[
                          TouchSensor(description='HAnimJoint vt10, HAnimSegment t10'),
                          Transform(translation=(0.0056,1.2848,-0.0822),
                            children=[
                            Shape(USE='HAnimJointShape')]),
                          #  HAnimSegment visualization line from current <HAnimJoint name='vt10'/> to child <HAnimJoint name='vt9'/> 
                          Shape(
                            geometry=LineSet(vertexCount=[2],
                              coord=Coordinate(point=[(0.0056,1.2848,-0.0822),(0.0057,1.3126,-0.0838)]),
                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                          #  HAnimSite visualization line segment from ancestor <HAnimJoint name='vt10'/> to <HAnimSite name='substernale_pt'/> 
                          Shape(
                            geometry=LineSet(vertexCount=[2],
                              coord=Coordinate(point=[(0.0056,1.2848,-0.0822),(0.0085,1.2995,0.1147)]),
                              color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                          HAnimSite(DEF='hanim_substernale_pt',name='substernale_pt',translation=(0.0085,1.2995,0.1147),
                            #  HAnimSite visualization shape 
                            children=[
                            TouchSensor(description='HAnimSite substernale_pt'),
                            Shape(USE='HAnimSiteShape')])]),
                        HAnimJoint(DEF='hanim_vt9',center=(0.0057,1.3126,-0.0838),name='vt9',ulimit=[0,0,0],llimit=[0,0,0],
                          children=[
                          HAnimSegment(DEF='hanim_t9',name='t9',
                            #  Visualization sphere for <HAnimJoint name='vt9'/> is placed within <HAnimSegment name='t9'/> 
                            children=[
                            TouchSensor(description='HAnimJoint vt9, HAnimSegment t9'),
                            Transform(translation=(0.0057,1.3126,-0.0838),
                              children=[
                              Shape(USE='HAnimJointShape')]),
                            #  HAnimSegment visualization line from current <HAnimJoint name='vt9'/> to child <HAnimJoint name='vt8'/> 
                            Shape(
                              geometry=LineSet(vertexCount=[2],
                                coord=Coordinate(point=[(0.0057,1.3126,-0.0838),(0.0057,1.3382,-0.0845)]),
                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                            #  HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='r_thelion_pt'/> 
                            Shape(
                              geometry=LineSet(vertexCount=[2],
                                coord=Coordinate(point=[(0.0057,1.3126,-0.0838),(-0.0736,1.3385,0.1217)]),
                                color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                            #  HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='l_thelion_pt'/> 
                            Shape(
                              geometry=LineSet(vertexCount=[2],
                                coord=Coordinate(point=[(0.0057,1.3126,-0.0838),(0.0918,1.3382,0.1192)]),
                                color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                            HAnimSite(DEF='hanim_r_thelion_pt',name='r_thelion_pt',translation=(-0.0736,1.3385,0.1217),
                              #  HAnimSite visualization shape 
                              children=[
                              TouchSensor(description='HAnimSite r_thelion_pt'),
                              Shape(USE='HAnimSiteShape')]),
                            HAnimSite(DEF='hanim_l_thelion_pt',name='l_thelion_pt',translation=(0.0918,1.3382,0.1192),
                              #  HAnimSite visualization shape 
                              children=[
                              TouchSensor(description='HAnimSite l_thelion_pt'),
                              Shape(USE='HAnimSiteShape')])]),
                          HAnimJoint(DEF='hanim_vt8',center=(0.0057,1.3382,-0.0845),name='vt8',ulimit=[0,0,0],llimit=[0,0,0],
                            children=[
                            HAnimSegment(DEF='hanim_t8',name='t8',
                              #  Visualization sphere for <HAnimJoint name='vt8'/> is placed within <HAnimSegment name='t8'/> 
                              children=[
                              TouchSensor(description='HAnimJoint vt8, HAnimSegment t8'),
                              Transform(translation=(0.0057,1.3382,-0.0845),
                                children=[
                                Shape(USE='HAnimJointShape')]),
                              #  HAnimSegment visualization line from current <HAnimJoint name='vt8'/> to child <HAnimJoint name='vt7'/> 
                              Shape(
                                geometry=LineSet(vertexCount=[2],
                                  coord=Coordinate(point=[(0.0057,1.3382,-0.0845),(0.0058,1.3625,-0.0833)]),
                                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                            HAnimJoint(DEF='hanim_vt7',center=(0.0058,1.3625,-0.0833),name='vt7',ulimit=[0,0,0],llimit=[0,0,0],
                              children=[
                              HAnimSegment(DEF='hanim_t7',name='t7',
                                #  Visualization sphere for <HAnimJoint name='vt7'/> is placed within <HAnimSegment name='t7'/> 
                                children=[
                                TouchSensor(description='HAnimJoint vt7, HAnimSegment t7'),
                                Transform(translation=(0.0058,1.3625,-0.0833),
                                  children=[
                                  Shape(USE='HAnimJointShape')]),
                                #  HAnimSegment visualization line from current <HAnimJoint name='vt7'/> to child <HAnimJoint name='vt6'/> 
                                Shape(
                                  geometry=LineSet(vertexCount=[2],
                                    coord=Coordinate(point=[(0.0058,1.3625,-0.0833),(0.0059,1.3866,-0.08)]),
                                    color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                              HAnimJoint(DEF='hanim_vt6',center=(0.0059,1.3866,-0.08),name='vt6',ulimit=[0,0,0],llimit=[0,0,0],
                                children=[
                                HAnimSegment(DEF='hanim_t6',name='t6',
                                  #  Visualization sphere for <HAnimJoint name='vt6'/> is placed within <HAnimSegment name='t6'/> 
                                  children=[
                                  TouchSensor(description='HAnimJoint vt6, HAnimSegment t6'),
                                  Transform(translation=(0.0059,1.3866,-0.08),
                                    children=[
                                    Shape(USE='HAnimJointShape')]),
                                  #  HAnimSegment visualization line from current <HAnimJoint name='vt6'/> to child <HAnimJoint name='vt5'/> 
                                  Shape(
                                    geometry=LineSet(vertexCount=[2],
                                      coord=Coordinate(point=[(0.0059,1.3866,-0.08),(0.006,1.4102,-0.0745)]),
                                      color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                HAnimJoint(DEF='hanim_vt5',center=(0.006,1.4102,-0.0745),name='vt5',ulimit=[0,0,0],llimit=[0,0,0],
                                  children=[
                                  HAnimSegment(DEF='hanim_t5',name='t5',
                                    #  Visualization sphere for <HAnimJoint name='vt5'/> is placed within <HAnimSegment name='t5'/> 
                                    children=[
                                    TouchSensor(description='HAnimJoint vt5, HAnimSegment t5'),
                                    Transform(translation=(0.006,1.4102,-0.0745),
                                      children=[
                                      Shape(USE='HAnimJointShape')]),
                                    #  HAnimSegment visualization line from current <HAnimJoint name='vt5'/> to child <HAnimJoint name='vt4'/> 
                                    Shape(
                                      geometry=LineSet(vertexCount=[2],
                                        coord=Coordinate(point=[(0.006,1.4102,-0.0745),(0.0061,1.432,-0.0675)]),
                                        color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                  HAnimJoint(DEF='hanim_vt4',center=(0.0061,1.432,-0.0675),name='vt4',ulimit=[0,0,0],llimit=[0,0,0],
                                    children=[
                                    HAnimSegment(DEF='hanim_t4',name='t4',
                                      #  Visualization sphere for <HAnimJoint name='vt4'/> is placed within <HAnimSegment name='t4'/> 
                                      children=[
                                      TouchSensor(description='HAnimJoint vt4, HAnimSegment t4'),
                                      Transform(translation=(0.0061,1.432,-0.0675),
                                        children=[
                                        Shape(USE='HAnimJointShape')]),
                                      #  HAnimSegment visualization line from current <HAnimJoint name='vt4'/> to child <HAnimJoint name='vt3'/> 
                                      Shape(
                                        geometry=LineSet(vertexCount=[2],
                                          coord=Coordinate(point=[(0.0061,1.432,-0.0675),(0.0062,1.4583,-0.057)]),
                                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                    HAnimJoint(DEF='hanim_vt3',center=(0.0062,1.4583,-0.057),name='vt3',ulimit=[0,0,0],llimit=[0,0,0],
                                      children=[
                                      HAnimSegment(DEF='hanim_t3',name='t3',
                                        #  Visualization sphere for <HAnimJoint name='vt3'/> is placed within <HAnimSegment name='t3'/> 
                                        children=[
                                        TouchSensor(description='HAnimJoint vt3, HAnimSegment t3'),
                                        Transform(translation=(0.0062,1.4583,-0.057),
                                          children=[
                                          Shape(USE='HAnimJointShape')]),
                                        #  HAnimSegment visualization line from current <HAnimJoint name='vt3'/> to child <HAnimJoint name='vt2'/> 
                                        Shape(
                                          geometry=LineSet(vertexCount=[2],
                                            coord=Coordinate(point=[(0.0062,1.4583,-0.057),(0.0063,1.4761,-0.0484)]),
                                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                      HAnimJoint(DEF='hanim_vt2',center=(0.0063,1.4761,-0.0484),name='vt2',ulimit=[0,0,0],llimit=[0,0,0],
                                        children=[
                                        HAnimSegment(DEF='hanim_t2',name='t2',
                                          #  Visualization sphere for <HAnimJoint name='vt2'/> is placed within <HAnimSegment name='t2'/> 
                                          children=[
                                          TouchSensor(description='HAnimJoint vt2, HAnimSegment t2'),
                                          Transform(translation=(0.0063,1.4761,-0.0484),
                                            children=[
                                            Shape(USE='HAnimJointShape')]),
                                          #  HAnimSegment visualization line from current <HAnimJoint name='vt2'/> to child <HAnimJoint name='vt1'/> 
                                          Shape(
                                            geometry=LineSet(vertexCount=[2],
                                              coord=Coordinate(point=[(0.0063,1.4761,-0.0484),(0.0065,1.4951,-0.0387)]),
                                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                        HAnimJoint(DEF='hanim_vt1',center=(0.0065,1.4951,-0.0387),name='vt1',ulimit=[0,0,0],llimit=[0,0,0],
                                          children=[
                                          HAnimSegment(DEF='hanim_t1',name='t1',
                                            #  Visualization sphere for <HAnimJoint name='vt1'/> is placed within <HAnimSegment name='t1'/> 
                                            children=[
                                            TouchSensor(description='HAnimJoint vt1, HAnimSegment t1'),
                                            Transform(translation=(0.0065,1.4951,-0.0387),
                                              children=[
                                              Shape(USE='HAnimJointShape')]),
                                            #  HAnimSegment visualization line from current <HAnimJoint name='vt1'/> to child <HAnimJoint name='vc7'/> 
                                            Shape(
                                              geometry=LineSet(vertexCount=[2],
                                                coord=Coordinate(point=[(0.0065,1.4951,-0.0387),(0.0066,1.5132,-0.0301)]),
                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                            #  HAnimSegment visualization line from current <HAnimJoint name='vt1'/> to child <HAnimJoint name='l_sternoclavicular'/> 
                                            Shape(
                                              geometry=LineSet(vertexCount=[2],
                                                coord=Coordinate(point=[(0.0065,1.4951,-0.0387),(0.082,1.4488,-0.0353)]),
                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                            #  HAnimSegment visualization line from current <HAnimJoint name='vt1'/> to child <HAnimJoint name='r_sternoclavicular'/> 
                                            Shape(
                                              geometry=LineSet(vertexCount=[2],
                                                coord=Coordinate(point=[(0.0065,1.4951,-0.0387),(-0.082,1.4488,-0.0353)]),
                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                            #  HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='suprasternale_pt'/> 
                                            Shape(
                                              geometry=LineSet(vertexCount=[2],
                                                coord=Coordinate(point=[(0.0065,1.4951,-0.0387),(0.0084,1.4714,0.0551)]),
                                                color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                            #  HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='cervicale_pt'/> 
                                            Shape(
                                              geometry=LineSet(vertexCount=[2],
                                                coord=Coordinate(point=[(0.0065,1.4951,-0.0387),(0.0064,1.52,-0.0815)]),
                                                color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                            HAnimSite(DEF='hanim_suprasternale_pt',name='suprasternale_pt',translation=(0.0084,1.4714,0.0551),
                                              #  HAnimSite visualization shape 
                                              children=[
                                              TouchSensor(description='HAnimSite suprasternale_pt'),
                                              Shape(USE='HAnimSiteShape')]),
                                            HAnimSite(DEF='hanim_cervicale_pt',name='cervicale_pt',translation=(0.0064,1.52,-0.0815),
                                              #  HAnimSite visualization shape 
                                              children=[
                                              TouchSensor(description='HAnimSite cervicale_pt'),
                                              Shape(USE='HAnimSiteShape')])]),
                                          HAnimJoint(DEF='hanim_vc7',center=(0.0066,1.5132,-0.0301),name='vc7',ulimit=[0,0,0],llimit=[0,0,0],
                                            children=[
                                            HAnimSegment(DEF='hanim_c7',name='c7',
                                              #  Visualization sphere for <HAnimJoint name='vc7'/> is placed within <HAnimSegment name='c7'/> 
                                              children=[
                                              TouchSensor(description='HAnimJoint vc7, HAnimSegment c7'),
                                              Transform(translation=(0.0066,1.5132,-0.0301),
                                                children=[
                                                Shape(USE='HAnimJointShape')]),
                                              #  HAnimSegment visualization line from current <HAnimJoint name='vc7'/> to child <HAnimJoint name='vc6'/> 
                                              Shape(
                                                geometry=LineSet(vertexCount=[2],
                                                  coord=Coordinate(point=[(0.0066,1.5132,-0.0301),(0.0066,1.5357,-0.0143)]),
                                                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                              #  HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='r_neck_base_pt'/> 
                                              Shape(
                                                geometry=LineSet(vertexCount=[2],
                                                  coord=Coordinate(point=[(0.0066,1.5132,-0.0301),(-0.0419,1.5149,-0.022)]),
                                                  color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                              #  HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='l_neck_base_pt'/> 
                                              Shape(
                                                geometry=LineSet(vertexCount=[2],
                                                  coord=Coordinate(point=[(0.0066,1.5132,-0.0301),(0.0646,1.5141,-0.038)]),
                                                  color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                              HAnimSite(DEF='hanim_r_neck_base_pt',name='r_neck_base_pt',translation=(-0.0419,1.5149,-0.022),
                                                #  HAnimSite visualization shape 
                                                children=[
                                                TouchSensor(description='HAnimSite r_neck_base_pt'),
                                                Shape(USE='HAnimSiteShape')]),
                                              HAnimSite(DEF='hanim_l_neck_base_pt',name='l_neck_base_pt',translation=(0.0646,1.5141,-0.038),
                                                #  HAnimSite visualization shape 
                                                children=[
                                                TouchSensor(description='HAnimSite l_neck_base_pt'),
                                                Shape(USE='HAnimSiteShape')])]),
                                            HAnimJoint(DEF='hanim_vc6',center=(0.0066,1.5357,-0.0143),name='vc6',ulimit=[0,0,0],llimit=[0,0,0],
                                              children=[
                                              HAnimSegment(DEF='hanim_c6',name='c6',
                                                #  Visualization sphere for <HAnimJoint name='vc6'/> is placed within <HAnimSegment name='c6'/> 
                                                children=[
                                                TouchSensor(description='HAnimJoint vc6, HAnimSegment c6'),
                                                Transform(translation=(0.0066,1.5357,-0.0143),
                                                  children=[
                                                  Shape(USE='HAnimJointShape')]),
                                                #  HAnimSegment visualization line from current <HAnimJoint name='vc6'/> to child <HAnimJoint name='vc5'/> 
                                                Shape(
                                                  geometry=LineSet(vertexCount=[2],
                                                    coord=Coordinate(point=[(0.0066,1.5357,-0.0143),(0.0066,1.552,-0.0082)]),
                                                    color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                              HAnimJoint(DEF='hanim_vc5',center=(0.0066,1.552,-0.0082),name='vc5',ulimit=[0,0,0],llimit=[0,0,0],
                                                children=[
                                                HAnimSegment(DEF='hanim_c5',name='c5',
                                                  #  Visualization sphere for <HAnimJoint name='vc5'/> is placed within <HAnimSegment name='c5'/> 
                                                  children=[
                                                  TouchSensor(description='HAnimJoint vc5, HAnimSegment c5'),
                                                  Transform(translation=(0.0066,1.552,-0.0082),
                                                    children=[
                                                    Shape(USE='HAnimJointShape')]),
                                                  #  HAnimSegment visualization line from current <HAnimJoint name='vc5'/> to child <HAnimJoint name='vc4'/> 
                                                  Shape(
                                                    geometry=LineSet(vertexCount=[2],
                                                      coord=Coordinate(point=[(0.0066,1.552,-0.0082),(0.0066,1.5662,-0.0084)]),
                                                      color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                HAnimJoint(DEF='hanim_vc4',center=(0.0066,1.5662,-0.0084),name='vc4',ulimit=[0,0,0],llimit=[0,0,0],
                                                  children=[
                                                  HAnimSegment(DEF='hanim_c4',name='c4',
                                                    #  Visualization sphere for <HAnimJoint name='vc4'/> is placed within <HAnimSegment name='c4'/> 
                                                    children=[
                                                    TouchSensor(description='HAnimJoint vc4, HAnimSegment c4'),
                                                    Transform(translation=(0.0066,1.5662,-0.0084),
                                                      children=[
                                                      Shape(USE='HAnimJointShape')]),
                                                    #  HAnimSegment visualization line from current <HAnimJoint name='vc4'/> to child <HAnimJoint name='vc3'/> 
                                                    Shape(
                                                      geometry=LineSet(vertexCount=[2],
                                                        coord=Coordinate(point=[(0.0066,1.5662,-0.0084),(0.0066,1.58,-0.0103)]),
                                                        color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                  HAnimJoint(DEF='hanim_vc3',center=(0.0066,1.58,-0.0103),name='vc3',ulimit=[0,0,0],llimit=[0,0,0],
                                                    children=[
                                                    HAnimSegment(DEF='hanim_c3',name='c3',
                                                      #  Visualization sphere for <HAnimJoint name='vc3'/> is placed within <HAnimSegment name='c3'/> 
                                                      children=[
                                                      TouchSensor(description='HAnimJoint vc3, HAnimSegment c3'),
                                                      Transform(translation=(0.0066,1.58,-0.0103),
                                                        children=[
                                                        Shape(USE='HAnimJointShape')]),
                                                      #  HAnimSegment visualization line from current <HAnimJoint name='vc3'/> to child <HAnimJoint name='vc2'/> 
                                                      Shape(
                                                        geometry=LineSet(vertexCount=[2],
                                                          coord=Coordinate(point=[(0.0066,1.58,-0.0103),(0.0066,1.5928,-0.0103)]),
                                                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                    HAnimJoint(DEF='hanim_vc2',center=(0.0066,1.5928,-0.0103),name='vc2',ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimSegment(DEF='hanim_c2',name='c2',
                                                        #  Visualization sphere for <HAnimJoint name='vc2'/> is placed within <HAnimSegment name='c2'/> 
                                                        children=[
                                                        TouchSensor(description='HAnimJoint vc2, HAnimSegment c2'),
                                                        Transform(translation=(0.0066,1.5928,-0.0103),
                                                          children=[
                                                          Shape(USE='HAnimJointShape')]),
                                                        #  HAnimSegment visualization line from current <HAnimJoint name='vc2'/> to child <HAnimJoint name='vc1'/> 
                                                        Shape(
                                                          geometry=LineSet(vertexCount=[2],
                                                            coord=Coordinate(point=[(0.0066,1.5928,-0.0103),(0.0066,1.6144,-0.0034)]),
                                                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                      HAnimJoint(DEF='hanim_vc1',center=(0.0066,1.6144,-0.0034),name='vc1',ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimSegment(DEF='hanim_c1',name='c1',
                                                          #  Visualization sphere for <HAnimJoint name='vc1'/> is placed within <HAnimSegment name='c1'/> 
                                                          children=[
                                                          TouchSensor(description='HAnimJoint vc1, HAnimSegment c1'),
                                                          Transform(translation=(0.0066,1.6144,-0.0034),
                                                            children=[
                                                            Shape(USE='HAnimJointShape')]),
                                                          #  HAnimSegment visualization line from current <HAnimJoint name='vc1'/> to child <HAnimJoint name='skullbase'/> 
                                                          Shape(
                                                            geometry=LineSet(vertexCount=[2],
                                                              coord=Coordinate(point=[(0.0066,1.6144,-0.0034),(0.0044,1.6209,0.0236)]),
                                                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                        HAnimJoint(DEF='hanim_skullbase',center=(0.0044,1.6209,0.0236),name='skullbase',ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimSegment(DEF='hanim_skull',name='skull',
                                                            #  Visualization sphere for <HAnimJoint name='skullbase'/> is placed within <HAnimSegment name='skull'/> 
                                                            children=[
                                                            TouchSensor(description='HAnimJoint skullbase, HAnimSegment skull'),
                                                            Transform(translation=(0.0044,1.6209,0.0236),
                                                              children=[
                                                              Shape(USE='HAnimJointShape')]),
                                                            #  HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='l_eyeball_joint'/> 
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(0.0044,1.6209,0.0236),(0.0336,1.6332,0.0502)]),
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                            #  HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='l_eyelid_joint'/> 
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(0.0044,1.6209,0.0236),(0.0336,1.6332,0.0502)]),
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                            #  HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='l_eyebrow_joint'/> 
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(0.0044,1.6209,0.0236),(0.0336,1.635,0.0506)]),
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                            #  HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='r_eyeball_joint'/> 
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(0.0044,1.6209,0.0236),(-0.0336,1.6332,0.0502)]),
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                            #  HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='r_eyelid_joint'/> 
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(0.0044,1.6209,0.0236),(-0.0336,1.6332,0.0502)]),
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                            #  HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='r_eyebrow_joint'/> 
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(0.0044,1.6209,0.0236),(-0.0336,1.635,0.0506)]),
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                            #  HAnimSegment visualization line from current <HAnimJoint name='skullbase'/> to child <HAnimJoint name='temporomandibular'/> 
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(0.0044,1.6209,0.0236),(0.0,1.63,0.015)]),
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                            #  HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='skull_tip'/> 
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(0.0044,1.6209,0.0236),(0.005,1.7504,0.0055)]),
                                                                color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                            #  HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='sellion_pt'/> 
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(0.0044,1.6209,0.0236),(0.0058,1.6316,0.0852)]),
                                                                color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                            #  HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_infraorbitale_pt'/> 
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(0.0044,1.6209,0.0236),(-0.0237,1.6171,0.0752)]),
                                                                color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                            #  HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_infraorbitale_pt'/> 
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(0.0044,1.6209,0.0236),(0.0341,1.6171,0.0752)]),
                                                                color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                            #  HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='supramenton_pt'/> 
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(0.0044,1.6209,0.0236),(0.0061,1.541,0.0805)]),
                                                                color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                            #  HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_tragion_pt'/> 
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(0.0044,1.6209,0.0236),(-0.0646,1.6347,0.0302)]),
                                                                color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                            #  HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_gonion_pt'/> 
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(0.0044,1.6209,0.0236),(-0.052,1.5529,0.0347)]),
                                                                color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                            #  HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_tragion_pt'/> 
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(0.0044,1.6209,0.0236),(0.0739,1.6348,0.0282)]),
                                                                color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                            #  HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_gonion_pt'/> 
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(0.0044,1.6209,0.0236),(0.0631,1.553,0.033)]),
                                                                color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                            #  HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='nuchale_pt'/> 
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(0.0044,1.6209,0.0236),(0.0039,1.5972,-0.0796)]),
                                                                color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                            HAnimSite(DEF='hanim_skull_vertex_pt',name='skull_vertex_pt',translation=(0.005,1.7504,0.0055),
                                                              #  TODO move skull_tip x to zero, check others for symmetry 
                                                              #  HAnimSite visualization shape 
                                                              children=[
                                                              TouchSensor(description='HAnimSite skull_tip'),
                                                              Shape(USE='HAnimSiteShape')]),
                                                            HAnimSite(DEF='hanim_sellion_pt',name='sellion_pt',translation=(0.0058,1.6316,0.0852),
                                                              #  HAnimSite visualization shape 
                                                              children=[
                                                              TouchSensor(description='HAnimSite sellion_pt'),
                                                              Shape(USE='HAnimSiteShape')]),
                                                            HAnimSite(DEF='hanim_r_infraorbitale_pt',name='r_infraorbitale_pt',translation=(-0.0237,1.6171,0.0752),
                                                              #  HAnimSite visualization shape 
                                                              children=[
                                                              TouchSensor(description='HAnimSite r_infraorbitale_pt'),
                                                              Shape(USE='HAnimSiteShape')]),
                                                            HAnimSite(DEF='hanim_l_infraorbitale_pt',name='l_infraorbitale_pt',translation=(0.0341,1.6171,0.0752),
                                                              #  HAnimSite visualization shape 
                                                              children=[
                                                              TouchSensor(description='HAnimSite l_infraorbitale_pt'),
                                                              Shape(USE='HAnimSiteShape')]),
                                                            HAnimSite(DEF='hanim_supramenton_pt',name='supramenton_pt',translation=(0.0061,1.541,0.0805),
                                                              #  HAnimSite visualization shape 
                                                              children=[
                                                              TouchSensor(description='HAnimSite supramenton_pt'),
                                                              Shape(USE='HAnimSiteShape')]),
                                                            HAnimSite(DEF='hanim_r_tragion_pt',name='r_tragion_pt',translation=(-0.0646,1.6347,0.0302),
                                                              #  HAnimSite visualization shape 
                                                              children=[
                                                              TouchSensor(description='HAnimSite r_tragion_pt'),
                                                              Shape(USE='HAnimSiteShape')]),
                                                            HAnimSite(DEF='hanim_r_gonion_pt',name='r_gonion_pt',translation=(-0.052,1.5529,0.0347),
                                                              #  HAnimSite visualization shape 
                                                              children=[
                                                              TouchSensor(description='HAnimSite r_gonion_pt'),
                                                              Shape(USE='HAnimSiteShape')]),
                                                            HAnimSite(DEF='hanim_l_tragion_pt',name='l_tragion_pt',translation=(0.0739,1.6348,0.0282),
                                                              #  HAnimSite visualization shape 
                                                              children=[
                                                              TouchSensor(description='HAnimSite l_tragion_pt'),
                                                              Shape(USE='HAnimSiteShape')]),
                                                            HAnimSite(DEF='hanim_l_gonion_pt',name='l_gonion_pt',translation=(0.0631,1.553,0.033),
                                                              #  HAnimSite visualization shape 
                                                              children=[
                                                              TouchSensor(description='HAnimSite l_gonion_pt'),
                                                              Shape(USE='HAnimSiteShape')]),
                                                            HAnimSite(DEF='hanim_nuchale_pt',name='nuchale_pt',translation=(0.0039,1.5972,-0.0796),
                                                              #  HAnimSite visualization shape 
                                                              children=[
                                                              TouchSensor(description='HAnimSite nuchale_pt'),
                                                              Shape(USE='HAnimSiteShape')])]),
                                                          HAnimJoint(DEF='hanim_l_eyeball_joint',center=(0.0336,1.6332,0.0502),name='l_eyeball_joint',ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='hanim_l_eyeball',name='l_eyeball',
                                                              #  Visualization sphere for <HAnimJoint name='l_eyeball_joint'/> is placed within <HAnimSegment name='l_eyeball'/> 
                                                              children=[
                                                              TouchSensor(description='HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball'),
                                                              Transform(translation=(0.0336,1.6332,0.0502),
                                                                children=[
                                                                Shape(USE='HAnimJointShape')]),
                                                              #  HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_eyeball_joint'/> to <HAnimSite name='l_eyeball_site_view'/> 
                                                              Shape(
                                                                geometry=LineSet(vertexCount=[2],
                                                                  coord=Coordinate(point=[(0.0336,1.6332,0.0502),(0.034,1.64,0.05)]),
                                                                  color=ColorRGBA(DEF='HAnimSiteViewpointLineColorRGBA',color=[(1,1,0,1),(1,1,0,0.1)]))),
                                                              HAnimSite(DEF='hanim_l_eyeball_site_view',name='l_eyeball_site_view',translation=(0.034,1.64,0.05),
                                                                #  HAnimSite visualization shape 
                                                                children=[
                                                                TouchSensor(description='HAnimSite l_eyeball_site_view'),
                                                                Shape(USE='HAnimSiteShape'),
                                                                Viewpoint(DEF='hanim_l_eyeball_site_viewpoint',description='l_eyeball_site_viewpoint looking forward',orientation=(0,1,0,3.141593),position=(0,0,0)),
                                                                #  HAnimSite/Viewpoint visualization shape 
                                                                Anchor(description='HAnimSite hanim_l_eyeball_site_view Viewpoint',url=["#hanim_l_eyeball_site_viewpoint"],
                                                                  children=[
                                                                  LOD(forceTransitions=True,range=[0.04],
                                                                    children=[
                                                                    WorldInfo(info=["hide diamond when close"]),
                                                                    Shape(DEF='HAnimSiteViewpointShape',
                                                                      geometry=IndexedFaceSet(DEF='SiteViewpointDiamondIFS',coordIndex=[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1],creaseAngle=0.5,
                                                                        coord=Coordinate(point=[(0,0.010,0),(-0.010,0,0),(0,0,0.010),(0.010,0,0),(0,0,-0.010),(0,-0.010,0)])),
                                                                      appearance=Appearance(
                                                                        material=Material(diffuseColor=(1,1,0),transparency=0.3)))])])])])]),
                                                          HAnimJoint(DEF='hanim_l_eyelid_joint',center=(0.0336,1.6332,0.0502),name='l_eyelid_joint',ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='hanim_l_eyelid',name='l_eyelid',
                                                              #  Visualization sphere for <HAnimJoint name='l_eyelid_joint'/> is placed within <HAnimSegment name='l_eyelid'/> 
                                                              children=[
                                                              TouchSensor(description='HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid'),
                                                              Transform(translation=(0.0336,1.6332,0.0502),
                                                                children=[
                                                                Shape(USE='HAnimJointShape')])])]),
                                                          HAnimJoint(DEF='hanim_l_eyebrow_joint',center=(0.0336,1.635,0.0506),name='l_eyebrow_joint',ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='hanim_l_eyebrow',name='l_eyebrow',
                                                              #  Visualization sphere for <HAnimJoint name='l_eyebrow_joint'/> is placed within <HAnimSegment name='l_eyebrow'/> 
                                                              children=[
                                                              TouchSensor(description='HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow'),
                                                              Transform(translation=(0.0336,1.635,0.0506),
                                                                children=[
                                                                Shape(USE='HAnimJointShape')])])]),
                                                          HAnimJoint(DEF='hanim_r_eyeball_joint',center=(-0.0336,1.6332,0.0502),name='r_eyeball_joint',ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='hanim_r_eyeball',name='r_eyeball',
                                                              #  Visualization sphere for <HAnimJoint name='r_eyeball_joint'/> is placed within <HAnimSegment name='r_eyeball'/> 
                                                              children=[
                                                              TouchSensor(description='HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball'),
                                                              Transform(translation=(-0.0336,1.6332,0.0502),
                                                                children=[
                                                                Shape(USE='HAnimJointShape')]),
                                                              #  HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_eyeball_joint'/> to <HAnimSite name='r_eyeball_site_view'/> 
                                                              Shape(
                                                                geometry=LineSet(vertexCount=[2],
                                                                  coord=Coordinate(point=[(-0.0336,1.6332,0.0502),(-0.034,1.64,0.05)]),
                                                                  color=ColorRGBA(USE='HAnimSiteViewpointLineColorRGBA'))),
                                                              HAnimSite(DEF='hanim_r_eyeball_site_view',name='r_eyeball_site_view',translation=(-0.034,1.64,0.05),
                                                                #  HAnimSite visualization shape 
                                                                children=[
                                                                TouchSensor(description='HAnimSite r_eyeball_site_view'),
                                                                Shape(USE='HAnimSiteShape'),
                                                                Viewpoint(DEF='hanim_r_eyeball_site_viewpoint',description='r_eyeball_site_viewpoint looking forward',orientation=(0,1,0,3.141593),position=(0,0,0)),
                                                                #  HAnimSite/Viewpoint visualization shape 
                                                                Anchor(description='HAnimSite hanim_r_eyeball_site_view Viewpoint',url=["#hanim_r_eyeball_site_viewpoint"],
                                                                  children=[
                                                                  LOD(forceTransitions=True,range=[0.04],
                                                                    children=[
                                                                    WorldInfo(info=["hide diamond when close"]),
                                                                    Shape(USE='HAnimSiteViewpointShape')])])])])]),
                                                          HAnimJoint(DEF='hanim_r_eyelid_joint',center=(-0.0336,1.6332,0.0502),name='r_eyelid_joint',ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='hanim_r_eyelid',name='r_eyelid',
                                                              #  Visualization sphere for <HAnimJoint name='r_eyelid_joint'/> is placed within <HAnimSegment name='r_eyelid'/> 
                                                              children=[
                                                              TouchSensor(description='HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid'),
                                                              Transform(translation=(-0.0336,1.6332,0.0502),
                                                                children=[
                                                                Shape(USE='HAnimJointShape')])])]),
                                                          HAnimJoint(DEF='hanim_r_eyebrow_joint',center=(-0.0336,1.635,0.0506),name='r_eyebrow_joint',ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='hanim_r_eyebrow',name='r_eyebrow',
                                                              #  Visualization sphere for <HAnimJoint name='r_eyebrow_joint'/> is placed within <HAnimSegment name='r_eyebrow'/> 
                                                              children=[
                                                              TouchSensor(description='HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow'),
                                                              Transform(translation=(-0.0336,1.635,0.0506),
                                                                children=[
                                                                Shape(USE='HAnimJointShape')])])]),
                                                          HAnimJoint(DEF='hanim_temporomandibular',center=(0.0,1.63,0.015),name='temporomandibular',ulimit=[0,0,0],llimit=[0,0,0],
                                                            #  Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint 
                                                            children=[
                                                            HAnimSegment(DEF='hanim_jaw',name='jaw',
                                                              #  Visualization sphere for <HAnimJoint name='temporomandibular'/> is placed within <HAnimSegment name='jaw'/> 
                                                              children=[
                                                              TouchSensor(description='HAnimJoint temporomandibular, HAnimSegment jaw'),
                                                              Transform(translation=(0.0,1.63,0.015),
                                                                children=[
                                                                Shape(USE='HAnimJointShape')]),
                                                              #  HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_l_site_pt'/> 
                                                              Shape(
                                                                geometry=LineSet(vertexCount=[2],
                                                                  coord=Coordinate(point=[(0.0,1.63,0.015),(0.045,1.63,0.0)]),
                                                                  color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                              #  HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_r_site_pt'/> 
                                                              Shape(
                                                                geometry=LineSet(vertexCount=[2],
                                                                  coord=Coordinate(point=[(0.0,1.63,0.015),(-0.045,1.63,0.0)]),
                                                                  color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                              HAnimSite(DEF='hanim_temporomandibular_l_site_pt',name='temporomandibular_l_site_pt',translation=(0.045,1.63,0.0),
                                                                #  HAnimSite visualization shape 
                                                                children=[
                                                                TouchSensor(description='HAnimSite temporomandibular_l_site_pt'),
                                                                Shape(USE='HAnimSiteShape')]),
                                                              HAnimSite(DEF='hanim_temporomandibular_r_site_pt',name='temporomandibular_r_site_pt',translation=(-0.045,1.63,0.0),
                                                                #  HAnimSite visualization shape 
                                                                children=[
                                                                TouchSensor(description='HAnimSite temporomandibular_r_site_pt'),
                                                                Shape(USE='HAnimSiteShape')])])])])])])])])])])]),
                                          HAnimJoint(DEF='hanim_l_sternoclavicular',center=(0.082,1.4488,-0.0353),name='l_sternoclavicular',ulimit=[0,0,0],llimit=[0,0,0],
                                            children=[
                                            HAnimSegment(DEF='hanim_l_clavicle',name='l_clavicle',
                                              #  Visualization sphere for <HAnimJoint name='l_sternoclavicular'/> is placed within <HAnimSegment name='l_clavicle'/> 
                                              children=[
                                              TouchSensor(description='HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle'),
                                              Transform(translation=(0.082,1.4488,-0.0353),
                                                children=[
                                                Shape(USE='HAnimJointShape')]),
                                              #  HAnimSegment visualization line from current <HAnimJoint name='l_sternoclavicular'/> to child <HAnimJoint name='l_acromioclavicular'/> 
                                              Shape(
                                                geometry=LineSet(vertexCount=[2],
                                                  coord=Coordinate(point=[(0.082,1.4488,-0.0353),(0.0962,1.4269,-0.0424)]),
                                                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                              #  HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_clavicale_pt'/> 
                                              Shape(
                                                geometry=LineSet(vertexCount=[2],
                                                  coord=Coordinate(point=[(0.082,1.4488,-0.0353),(0.0271,1.4943,0.0394)]),
                                                  color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                              #  HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_acromion_pt'/> 
                                              Shape(
                                                geometry=LineSet(vertexCount=[2],
                                                  coord=Coordinate(point=[(0.082,1.4488,-0.0353),(0.2032,1.476,-0.049)]),
                                                  color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                              #  HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_ant_pt'/> 
                                              Shape(
                                                geometry=LineSet(vertexCount=[2],
                                                  coord=Coordinate(point=[(0.082,1.4488,-0.0353),(0.1777,1.4065,-0.0075)]),
                                                  color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                              #  HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_post_pt'/> 
                                              Shape(
                                                geometry=LineSet(vertexCount=[2],
                                                  coord=Coordinate(point=[(0.082,1.4488,-0.0353),(0.1706,1.4072,-0.0875)]),
                                                  color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                              HAnimSite(DEF='hanim_l_clavicle_pt',name='l_clavicle_pt',translation=(0.0271,1.4943,0.0394),
                                                #  HAnimSite visualization shape 
                                                children=[
                                                TouchSensor(description='HAnimSite l_clavicale_pt'),
                                                Shape(USE='HAnimSiteShape')]),
                                              HAnimSite(DEF='hanim_l_acromion_pt',name='l_acromion_pt',translation=(0.2032,1.476,-0.049),
                                                #  HAnimSite visualization shape 
                                                children=[
                                                TouchSensor(description='HAnimSite l_acromion_pt'),
                                                Shape(USE='HAnimSiteShape')]),
                                              HAnimSite(DEF='hanim_l_axilla_proximal_pt',name='l_axilla_proximal_pt',translation=(0.1777,1.4065,-0.0075),
                                                #  HAnimSite visualization shape 
                                                children=[
                                                TouchSensor(description='HAnimSite l_axilla_ant_pt'),
                                                Shape(USE='HAnimSiteShape')]),
                                              HAnimSite(DEF='hanim_l_axilla_distal_pt',name='l_axilla_distal_pt',translation=(0.1706,1.4072,-0.0875),
                                                #  HAnimSite visualization shape 
                                                children=[
                                                TouchSensor(description='HAnimSite l_axilla_post_pt'),
                                                Shape(USE='HAnimSiteShape')])]),
                                            HAnimJoint(DEF='hanim_l_acromioclavicular',center=(0.0962,1.4269,-0.0424),name='l_acromioclavicular',ulimit=[0,0,0],llimit=[0,0,0],
                                              children=[
                                              HAnimSegment(DEF='hanim_l_scapula',name='l_scapula',
                                                #  Visualization sphere for <HAnimJoint name='l_acromioclavicular'/> is placed within <HAnimSegment name='l_scapula'/> 
                                                children=[
                                                TouchSensor(description='HAnimJoint l_acromioclavicular, HAnimSegment l_scapula'),
                                                Transform(translation=(0.0962,1.4269,-0.0424),
                                                  children=[
                                                  Shape(USE='HAnimJointShape')]),
                                                #  HAnimSegment visualization line from current <HAnimJoint name='l_acromioclavicular'/> to child <HAnimJoint name='l_shoulder'/> 
                                                Shape(
                                                  geometry=LineSet(vertexCount=[2],
                                                    coord=Coordinate(point=[(0.0962,1.4269,-0.0424),(0.2029,1.4376,-0.0387)]),
                                                    color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                              HAnimJoint(DEF='hanim_l_shoulder',center=(0.2029,1.4376,-0.0387),name='l_shoulder',ulimit=[0,0,0],llimit=[0,0,0],
                                                children=[
                                                HAnimSegment(DEF='hanim_l_upperarm',name='l_upperarm',
                                                  #  Visualization sphere for <HAnimJoint name='l_shoulder'/> is placed within <HAnimSegment name='l_upperarm'/> 
                                                  children=[
                                                  TouchSensor(description='HAnimJoint l_shoulder, HAnimSegment l_upperarm'),
                                                  Transform(translation=(0.2029,1.4376,-0.0387),
                                                    children=[
                                                    Shape(USE='HAnimJointShape')]),
                                                  #  HAnimSegment visualization line from current <HAnimJoint name='l_shoulder'/> to child <HAnimJoint name='l_elbow'/> 
                                                  Shape(
                                                    geometry=LineSet(vertexCount=[2],
                                                      coord=Coordinate(point=[(0.2029,1.4376,-0.0387),(0.2014,1.1357,-0.0682)]),
                                                      color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                  #  HAnimSite visualization line segment from ancestor <HAnimJoint name='l_shoulder'/> to <HAnimSite name='l_humeral_lateral_epicn_pt'/> 
                                                  Shape(
                                                    geometry=LineSet(vertexCount=[2],
                                                      coord=Coordinate(point=[(0.2029,1.4376,-0.0387),(0.228,1.1482,-0.11)]),
                                                      color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                  HAnimSite(DEF='hanim_l_humeral_lateral_epicondyle_pt',name='l_humeral_lateral_epicondyle_pt',translation=(0.228,1.1482,-0.11),
                                                    #  HAnimSite visualization shape 
                                                    children=[
                                                    TouchSensor(description='HAnimSite l_humeral_lateral_epicn_pt'),
                                                    Shape(USE='HAnimSiteShape')])]),
                                                HAnimJoint(DEF='hanim_l_elbow',center=(0.2014,1.1357,-0.0682),name='l_elbow',ulimit=[0,0,0],llimit=[0,0,0],
                                                  children=[
                                                  HAnimSegment(DEF='hanim_l_forearm',name='l_forearm',
                                                    #  Visualization sphere for <HAnimJoint name='l_elbow'/> is placed within <HAnimSegment name='l_forearm'/> 
                                                    children=[
                                                    TouchSensor(description='HAnimJoint l_elbow, HAnimSegment l_forearm'),
                                                    Transform(translation=(0.2014,1.1357,-0.0682),
                                                      children=[
                                                      Shape(USE='HAnimJointShape')]),
                                                    #  HAnimSegment visualization line from current <HAnimJoint name='l_elbow'/> to child <HAnimJoint name='l_radiocarpal'/> 
                                                    Shape(
                                                      geometry=LineSet(vertexCount=[2],
                                                        coord=Coordinate(point=[(0.2014,1.1357,-0.0682),(0.1984,0.8663,-0.0583)]),
                                                        color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                    #  HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radial_styloid_pt'/> 
                                                    Shape(
                                                      geometry=LineSet(vertexCount=[2],
                                                        coord=Coordinate(point=[(0.2014,1.1357,-0.0682),(0.1901,0.8645,-0.0415)]),
                                                        color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                    #  HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_olecranon_pt'/> 
                                                    Shape(
                                                      geometry=LineSet(vertexCount=[2],
                                                        coord=Coordinate(point=[(0.2014,1.1357,-0.0682),(0.1962,1.1375,-0.1123)]),
                                                        color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                    #  HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_humeral_medial_epicn_pt'/> 
                                                    Shape(
                                                      geometry=LineSet(vertexCount=[2],
                                                        coord=Coordinate(point=[(0.2014,1.1357,-0.0682),(0.1735,1.1272,-0.1113)]),
                                                        color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                    #  HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radiale_pt'/> 
                                                    Shape(
                                                      geometry=LineSet(vertexCount=[2],
                                                        coord=Coordinate(point=[(0.2014,1.1357,-0.0682),(0.2182,1.1212,-0.1167)]),
                                                        color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                    HAnimSite(DEF='hanim_l_radial_styloid_pt',name='l_radial_styloid_pt',translation=(0.1901,0.8645,-0.0415),
                                                      #  HAnimSite visualization shape 
                                                      children=[
                                                      TouchSensor(description='HAnimSite l_radial_styloid_pt'),
                                                      Shape(USE='HAnimSiteShape')]),
                                                    HAnimSite(DEF='hanim_l_olecranon_pt',name='l_olecranon_pt',translation=(0.1962,1.1375,-0.1123),
                                                      #  HAnimSite visualization shape 
                                                      children=[
                                                      TouchSensor(description='HAnimSite l_olecranon_pt'),
                                                      Shape(USE='HAnimSiteShape')]),
                                                    HAnimSite(DEF='hanim_l_humeral_medial_epicondyle_pt',name='l_humeral_medial_epicondyle_pt',translation=(0.1735,1.1272,-0.1113),
                                                      #  HAnimSite visualization shape 
                                                      children=[
                                                      TouchSensor(description='HAnimSite l_humeral_medial_epicn_pt'),
                                                      Shape(USE='HAnimSiteShape')]),
                                                    HAnimSite(DEF='hanim_l_radiale_pt',name='l_radiale_pt',translation=(0.2182,1.1212,-0.1167),
                                                      #  HAnimSite visualization shape 
                                                      children=[
                                                      TouchSensor(description='HAnimSite l_radiale_pt'),
                                                      Shape(USE='HAnimSiteShape')])]),
                                                  HAnimJoint(DEF='hanim_l_radiocarpal',center=(0.1984,0.8663,-0.0583),name='l_radiocarpal',ulimit=[0,0,0],llimit=[0,0,0],
                                                    children=[
                                                    HAnimSegment(DEF='hanim_l_carpal',name='l_carpal',
                                                      #  Visualization sphere for <HAnimJoint name='l_radiocarpal'/> is placed within <HAnimSegment name='l_carpal'/> 
                                                      children=[
                                                      TouchSensor(description='HAnimJoint l_radiocarpal, HAnimSegment l_carpal'),
                                                      Transform(translation=(0.1984,0.8663,-0.0583),
                                                        children=[
                                                        Shape(USE='HAnimJointShape')]),
                                                      #  HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_thumb1'/> 
                                                      Shape(
                                                        geometry=LineSet(vertexCount=[2],
                                                          coord=Coordinate(point=[(0.1984,0.8663,-0.0583),(0.1924,0.8472,-0.0534)]),
                                                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                      #  HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_index0'/> 
                                                      Shape(
                                                        geometry=LineSet(vertexCount=[2],
                                                          coord=Coordinate(point=[(0.1984,0.8663,-0.0583),(0.1983,0.8024,-0.028)]),
                                                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                      #  HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_middle0'/> 
                                                      Shape(
                                                        geometry=LineSet(vertexCount=[2],
                                                          coord=Coordinate(point=[(0.1984,0.8663,-0.0583),(0.1987,0.8029,-0.053)]),
                                                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                      #  HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_ring0'/> 
                                                      Shape(
                                                        geometry=LineSet(vertexCount=[2],
                                                          coord=Coordinate(point=[(0.1984,0.8663,-0.0583),(0.1956,0.8019,-0.0794)]),
                                                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                      #  HAnimSegment visualization line from current <HAnimJoint name='l_radiocarpal'/> to child <HAnimJoint name='l_pinky0'/> 
                                                      Shape(
                                                        geometry=LineSet(vertexCount=[2],
                                                          coord=Coordinate(point=[(0.1984,0.8663,-0.0583),(0.1925,0.8066,-0.1036)]),
                                                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                      #  HAnimSite visualization line segment from ancestor <HAnimJoint name='l_radiocarpal'/> to <HAnimSite name='l_metacarpal_pha2_pt'/> 
                                                      Shape(
                                                        geometry=LineSet(vertexCount=[2],
                                                          coord=Coordinate(point=[(0.1984,0.8663,-0.0583),(0.2009,0.8139,-0.0237)]),
                                                          color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                      #  HAnimSite visualization line segment from ancestor <HAnimJoint name='l_radiocarpal'/> to <HAnimSite name='l_ulnar_styloid_pt'/> 
                                                      Shape(
                                                        geometry=LineSet(vertexCount=[2],
                                                          coord=Coordinate(point=[(0.1984,0.8663,-0.0583),(0.2142,0.8529,-0.0648)]),
                                                          color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                      #  HAnimSite visualization line segment from ancestor <HAnimJoint name='l_radiocarpal'/> to <HAnimSite name='l_metacarpal_pha5_pt'/> 
                                                      Shape(
                                                        geometry=LineSet(vertexCount=[2],
                                                          coord=Coordinate(point=[(0.1984,0.8663,-0.0583),(0.1929,0.786,-0.1122)]),
                                                          color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                      #  HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_radiocarpal'/> to <HAnimSite name='l_hand_front_view'/> 
                                                      Shape(
                                                        geometry=LineSet(vertexCount=[2],
                                                          coord=Coordinate(point=[(0.1984,0.8663,-0.0583),(0.3,0.75,0.45)]),
                                                          color=ColorRGBA(USE='HAnimSiteViewpointLineColorRGBA'))),
                                                      HAnimSite(DEF='hanim_l_metacarpal_phalanx_2_pt',name='l_metacarpal_phalanx_2_pt',translation=(0.2009,0.8139,-0.0237),
                                                        #  HAnimSite visualization shape 
                                                        children=[
                                                        TouchSensor(description='HAnimSite l_metacarpal_pha2_pt'),
                                                        Shape(USE='HAnimSiteShape')]),
                                                      HAnimSite(DEF='hanim_l_ulnar_styloid_pt',name='l_ulnar_styloid_pt',translation=(0.2142,0.8529,-0.0648),
                                                        #  HAnimSite visualization shape 
                                                        children=[
                                                        TouchSensor(description='HAnimSite l_ulnar_styloid_pt'),
                                                        Shape(USE='HAnimSiteShape')]),
                                                      HAnimSite(DEF='hanim_l_metacarpal_phalanx_5_pt',name='l_metacarpal_phalanx_5_pt',translation=(0.1929,0.786,-0.1122),
                                                        #  HAnimSite visualization shape 
                                                        children=[
                                                        TouchSensor(description='HAnimSite l_metacarpal_pha5_pt'),
                                                        Shape(USE='HAnimSiteShape')]),
                                                      HAnimSite(DEF='hanim_l_hand_front_view',name='l_hand_front_view',translation=(0.3,0.75,0.45),
                                                        #  HAnimSite visualization shape 
                                                        children=[
                                                        TouchSensor(description='HAnimSite l_hand_front_view'),
                                                        Shape(USE='HAnimSiteShape'),
                                                        Viewpoint(DEF='hanim_l_hand_front_viewpoint',centerOfRotation=(0,0.7,0),description='left hand front',position=(0,0,0)),
                                                        #  HAnimSite/Viewpoint visualization shape 
                                                        Anchor(description='HAnimSite hanim_l_hand_front_view Viewpoint',url=["#hanim_l_hand_front_viewpoint"],
                                                          children=[
                                                          LOD(forceTransitions=True,range=[0.04],
                                                            children=[
                                                            WorldInfo(info=["hide diamond when close"]),
                                                            Shape(USE='HAnimSiteViewpointShape')])])])]),
                                                    HAnimJoint(DEF='hanim_l_carpometacarpal_1',center=(0.1924,0.8472,-0.0534),name='l_carpometacarpal_1',ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimSegment(DEF='hanim_l_metacarpal_1',name='l_metacarpal_1',
                                                        #  Visualization sphere for <HAnimJoint name='l_thumb1'/> is placed within <HAnimSegment name='l_metacarpal_1'/> 
                                                        children=[
                                                        TouchSensor(description='HAnimJoint l_thumb1, HAnimSegment l_metacarpal_1'),
                                                        Transform(translation=(0.1924,0.8472,-0.0534),
                                                          children=[
                                                          Shape(USE='HAnimJointShape')]),
                                                        #  HAnimSegment visualization line from current <HAnimJoint name='l_thumb1'/> to child <HAnimJoint name='l_thumb2'/> 
                                                        Shape(
                                                          geometry=LineSet(vertexCount=[2],
                                                            coord=Coordinate(point=[(0.1924,0.8472,-0.0534),(0.1951,0.8226,0.0246)]),
                                                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                      HAnimJoint(DEF='hanim_l_metacarpophalangeal_1',center=(0.1951,0.8226,0.0246),name='l_metacarpophalangeal_1',ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimSegment(DEF='hanim_l_carpal_proximal_phalanx_1',name='l_carpal_proximal_phalanx_1',
                                                          #  Visualization sphere for <HAnimJoint name='l_thumb2'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_1'/> 
                                                          children=[
                                                          TouchSensor(description='HAnimJoint l_thumb2, HAnimSegment l_carpal_proximal_phalanx_1'),
                                                          Transform(translation=(0.1951,0.8226,0.0246),
                                                            children=[
                                                            Shape(USE='HAnimJointShape')]),
                                                          #  HAnimSegment visualization line from current <HAnimJoint name='l_thumb2'/> to child <HAnimJoint name='l_thumb3'/> 
                                                          Shape(
                                                            geometry=LineSet(vertexCount=[2],
                                                              coord=Coordinate(point=[(0.1951,0.8226,0.0246),(0.1955,0.8159,0.0464)]),
                                                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                        HAnimJoint(DEF='hanim_l_carpal_interphalangeal_1',center=(0.1955,0.8159,0.0464),name='l_carpal_interphalangeal_1',ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimSegment(DEF='hanim_l_carpal_distal_phalanx_1',name='l_carpal_distal_phalanx_1',
                                                            #  Visualization sphere for <HAnimJoint name='l_thumb3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_1'/> 
                                                            children=[
                                                            TouchSensor(description='HAnimJoint l_thumb3, HAnimSegment l_carpal_distal_phalanx_1'),
                                                            Transform(translation=(0.1955,0.8159,0.0464),
                                                              children=[
                                                              Shape(USE='HAnimJointShape')]),
                                                            #  HAnimSite visualization line segment from ancestor <HAnimJoint name='l_thumb3'/> to <HAnimSite name='l_thumb_distal_tip'/> 
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(0.1955,0.8159,0.0464),(0.1982,0.8061,0.0759)]),
                                                                color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                            HAnimSite(DEF='hanim_l_carpal_distal_phalanx_1_pt',name='l_carpal_distal_phalanx_1_pt',translation=(0.1982,0.8061,0.0759),
                                                              #  HAnimSite visualization shape 
                                                              children=[
                                                              TouchSensor(description='HAnimSite l_thumb_distal_tip'),
                                                              Shape(USE='HAnimSiteShape')])])])])]),
                                                    HAnimJoint(DEF='hanim_l_carpometacarpal_2',center=(0.1983,0.8024,-0.028),name='l_carpometacarpal_2',ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimSegment(DEF='hanim_l_metacarpal_2',name='l_metacarpal_2',
                                                        #  Visualization sphere for <HAnimJoint name='l_index0'/> is placed within <HAnimSegment name='l_metacarpal_2'/> 
                                                        children=[
                                                        TouchSensor(description='HAnimJoint l_index0, HAnimSegment l_metacarpal_2'),
                                                        Transform(translation=(0.1983,0.8024,-0.028),
                                                          children=[
                                                          Shape(USE='HAnimJointShape')]),
                                                        #  HAnimSegment visualization line from current <HAnimJoint name='l_index0'/> to child <HAnimJoint name='l_index1'/> 
                                                        Shape(
                                                          geometry=LineSet(vertexCount=[2],
                                                            coord=Coordinate(point=[(0.1983,0.8024,-0.028),(0.1983,0.7815,-0.028)]),
                                                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                      HAnimJoint(DEF='hanim_l_metacarpophalangeal_2',center=(0.1983,0.7815,-0.028),name='l_metacarpophalangeal_2',ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimSegment(DEF='hanim_l_carpal_proximal_phalanx_2',name='l_carpal_proximal_phalanx_2',
                                                          #  Visualization sphere for <HAnimJoint name='l_index1'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_2'/> 
                                                          children=[
                                                          TouchSensor(description='HAnimJoint l_index1, HAnimSegment l_carpal_proximal_phalanx_2'),
                                                          Transform(translation=(0.1983,0.7815,-0.028),
                                                            children=[
                                                            Shape(USE='HAnimJointShape')]),
                                                          #  HAnimSegment visualization line from current <HAnimJoint name='l_index1'/> to child <HAnimJoint name='l_index2'/> 
                                                          Shape(
                                                            geometry=LineSet(vertexCount=[2],
                                                              coord=Coordinate(point=[(0.1983,0.7815,-0.028),(0.2017,0.7363,-0.0248)]),
                                                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                        HAnimJoint(DEF='hanim_l_carpal_proximal_interphalangeal_2',center=(0.2017,0.7363,-0.0248),name='l_carpal_proximal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimSegment(DEF='hanim_l_carpal_middle_phalanx_2',name='l_carpal_middle_phalanx_2',
                                                            #  Visualization sphere for <HAnimJoint name='l_index2'/> is placed within <HAnimSegment name='l_carpal_middle_phalanx_2'/> 
                                                            children=[
                                                            TouchSensor(description='HAnimJoint l_index2, HAnimSegment l_carpal_middle_phalanx_2'),
                                                            Transform(translation=(0.2017,0.7363,-0.0248),
                                                              children=[
                                                              Shape(USE='HAnimJointShape')]),
                                                            #  HAnimSegment visualization line from current <HAnimJoint name='l_index2'/> to child <HAnimJoint name='l_index3'/> 
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(0.2017,0.7363,-0.0248),(0.2028,0.7139,-0.0236)]),
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                          HAnimJoint(DEF='hanim_l_carpal_distal_interphalangeal_2',center=(0.2028,0.7139,-0.0236),name='l_carpal_distal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='hanim_l_carpal_distal_phalanx_2',name='l_carpal_distal_phalanx_2',
                                                              #  Visualization sphere for <HAnimJoint name='l_index3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_2'/> 
                                                              children=[
                                                              TouchSensor(description='HAnimJoint l_index3, HAnimSegment l_carpal_distal_phalanx_2'),
                                                              Transform(translation=(0.2028,0.7139,-0.0236),
                                                                children=[
                                                                Shape(USE='HAnimJointShape')]),
                                                              #  HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_index_distal_tip'/> 
                                                              Shape(
                                                                geometry=LineSet(vertexCount=[2],
                                                                  coord=Coordinate(point=[(0.2028,0.7139,-0.0236),(0.2089,0.6858,-0.0245)]),
                                                                  color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                              #  HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_dactylion_pt'/> 
                                                              Shape(
                                                                geometry=LineSet(vertexCount=[2],
                                                                  coord=Coordinate(point=[(0.2028,0.7139,-0.0236),(0.2056,0.6743,-0.0482)]),
                                                                  color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                              HAnimSite(DEF='hanim_l_carpal_distal_phalanx_2_pt',name='l_carpal_distal_phalanx_2_pt',translation=(0.2089,0.6858,-0.0245),
                                                                #  HAnimSite visualization shape 
                                                                children=[
                                                                TouchSensor(description='HAnimSite l_index_distal_tip'),
                                                                Shape(USE='HAnimSiteShape')]),
                                                              HAnimSite(DEF='hanim_l_dactylion_pt',name='l_dactylion_pt',translation=(0.2056,0.6743,-0.0482),
                                                                #  HAnimSite visualization shape 
                                                                children=[
                                                                TouchSensor(description='HAnimSite l_dactylion_pt'),
                                                                Shape(USE='HAnimSiteShape')])])])])])]),
                                                    HAnimJoint(DEF='hanim_l_carpometacarpal_3',center=(0.1987,0.8029,-0.053),name='l_carpometacarpal_3',ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimSegment(DEF='hanim_l_metacarpal_3',name='l_metacarpal_3',
                                                        #  Visualization sphere for <HAnimJoint name='l_middle0'/> is placed within <HAnimSegment name='l_metacarpal_3'/> 
                                                        children=[
                                                        TouchSensor(description='HAnimJoint l_middle0, HAnimSegment l_metacarpal_3'),
                                                        Transform(translation=(0.1987,0.8029,-0.053),
                                                          children=[
                                                          Shape(USE='HAnimJointShape')]),
                                                        #  HAnimSegment visualization line from current <HAnimJoint name='l_middle0'/> to child <HAnimJoint name='l_middle1'/> 
                                                        Shape(
                                                          geometry=LineSet(vertexCount=[2],
                                                            coord=Coordinate(point=[(0.1987,0.8029,-0.053),(0.1987,0.7818,-0.053)]),
                                                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                      HAnimJoint(DEF='hanim_l_metacarpophalangeal_3',center=(0.1987,0.7818,-0.053),name='l_metacarpophalangeal_3',ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimSegment(DEF='hanim_l_carpal_proximal_phalanx_3',name='l_carpal_proximal_phalanx_3',
                                                          #  Visualization sphere for <HAnimJoint name='l_middle1'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_3'/> 
                                                          children=[
                                                          TouchSensor(description='HAnimJoint l_middle1, HAnimSegment l_carpal_proximal_phalanx_3'),
                                                          Transform(translation=(0.1987,0.7818,-0.053),
                                                            children=[
                                                            Shape(USE='HAnimJointShape')]),
                                                          #  HAnimSegment visualization line from current <HAnimJoint name='l_middle1'/> to child <HAnimJoint name='l_middle2'/> 
                                                          Shape(
                                                            geometry=LineSet(vertexCount=[2],
                                                              coord=Coordinate(point=[(0.1987,0.7818,-0.053),(0.2013,0.7273,-0.0503)]),
                                                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                        HAnimJoint(DEF='hanim_l_carpal_proximal_interphalangeal_3',center=(0.2013,0.7273,-0.0503),name='l_carpal_proximal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimSegment(DEF='hanim_l_carpal_middle_phalanx_3',name='l_carpal_middle_phalanx_3',
                                                            #  Visualization sphere for <HAnimJoint name='l_middle2'/> is placed within <HAnimSegment name='l_carpal_middle_phalanx_3'/> 
                                                            children=[
                                                            TouchSensor(description='HAnimJoint l_middle2, HAnimSegment l_carpal_middle_phalanx_3'),
                                                            Transform(translation=(0.2013,0.7273,-0.0503),
                                                              children=[
                                                              Shape(USE='HAnimJointShape')]),
                                                            #  HAnimSegment visualization line from current <HAnimJoint name='l_middle2'/> to child <HAnimJoint name='l_middle3'/> 
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(0.2013,0.7273,-0.0503),(0.2026,0.7011,-0.0494)]),
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                          HAnimJoint(DEF='hanim_l_carpal_distal_interphalangeal_3',center=(0.2026,0.7011,-0.0494),name='l_carpal_distal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='hanim_l_carpal_distal_phalanx_3',name='l_carpal_distal_phalanx_3',
                                                              #  Visualization sphere for <HAnimJoint name='l_middle3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_3'/> 
                                                              children=[
                                                              TouchSensor(description='HAnimJoint l_middle3, HAnimSegment l_carpal_distal_phalanx_3'),
                                                              Transform(translation=(0.2026,0.7011,-0.0494),
                                                                children=[
                                                                Shape(USE='HAnimJointShape')]),
                                                              #  HAnimSite visualization line segment from ancestor <HAnimJoint name='l_middle3'/> to <HAnimSite name='l_middle_distal_tip'/> 
                                                              Shape(
                                                                geometry=LineSet(vertexCount=[2],
                                                                  coord=Coordinate(point=[(0.2026,0.7011,-0.0494),(0.208,0.6731,-0.0491)]),
                                                                  color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                              HAnimSite(DEF='hanim_l_carpal_distal_phalanx_3_pt',name='l_carpal_distal_phalanx_3_pt',translation=(0.208,0.6731,-0.0491),
                                                                #  HAnimSite visualization shape 
                                                                children=[
                                                                TouchSensor(description='HAnimSite l_middle_distal_tip'),
                                                                Shape(USE='HAnimSiteShape')])])])])])]),
                                                    HAnimJoint(DEF='hanim_l_carpometacarpal_4',center=(0.1956,0.8019,-0.0794),name='l_carpometacarpal_4',ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimSegment(DEF='hanim_l_metacarpal_4',name='l_metacarpal_4',
                                                        #  Visualization sphere for <HAnimJoint name='l_ring0'/> is placed within <HAnimSegment name='l_metacarpal_4'/> 
                                                        children=[
                                                        TouchSensor(description='HAnimJoint l_ring0, HAnimSegment l_metacarpal_4'),
                                                        Transform(translation=(0.1956,0.8019,-0.0794),
                                                          children=[
                                                          Shape(USE='HAnimJointShape')]),
                                                        #  HAnimSegment visualization line from current <HAnimJoint name='l_ring0'/> to child <HAnimJoint name='l_ring1'/> 
                                                        Shape(
                                                          geometry=LineSet(vertexCount=[2],
                                                            coord=Coordinate(point=[(0.1956,0.8019,-0.0794),(0.1956,0.7815,-0.0794)]),
                                                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                      HAnimJoint(DEF='hanim_l_metacarpophalangeal_4',center=(0.1956,0.7815,-0.0794),name='l_metacarpophalangeal_4',ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimSegment(DEF='hanim_l_carpal_proximal_phalanx_4',name='l_carpal_proximal_phalanx_4',
                                                          #  Visualization sphere for <HAnimJoint name='l_ring1'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_4'/> 
                                                          children=[
                                                          TouchSensor(description='HAnimJoint l_ring1, HAnimSegment l_carpal_proximal_phalanx_4'),
                                                          Transform(translation=(0.1956,0.7815,-0.0794),
                                                            children=[
                                                            Shape(USE='HAnimJointShape')]),
                                                          #  HAnimSegment visualization line from current <HAnimJoint name='l_ring1'/> to child <HAnimJoint name='l_ring2'/> 
                                                          Shape(
                                                            geometry=LineSet(vertexCount=[2],
                                                              coord=Coordinate(point=[(0.1956,0.7815,-0.0794),(0.1973,0.7287,-0.0777)]),
                                                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                        HAnimJoint(DEF='hanim_l_carpal_proximal_interphalangeal_4',center=(0.1973,0.7287,-0.0777),name='l_carpal_proximal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimSegment(DEF='hanim_l_carpal_middle_phalanx_4',name='l_carpal_middle_phalanx_4',
                                                            #  Visualization sphere for <HAnimJoint name='l_ring2'/> is placed within <HAnimSegment name='l_carpal_middle_phalanx_4'/> 
                                                            children=[
                                                            TouchSensor(description='HAnimJoint l_ring2, HAnimSegment l_carpal_middle_phalanx_4'),
                                                            Transform(translation=(0.1973,0.7287,-0.0777),
                                                              children=[
                                                              Shape(USE='HAnimJointShape')]),
                                                            #  HAnimSegment visualization line from current <HAnimJoint name='l_ring2'/> to child <HAnimJoint name='l_ring3'/> 
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(0.1973,0.7287,-0.0777),(0.1983,0.7045,-0.0767)]),
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                          HAnimJoint(DEF='hanim_l_carpal_distal_interphalangeal_4',center=(0.1983,0.7045,-0.0767),name='l_carpal_distal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='hanim_l_carpal_distal_phalanx_4',name='l_carpal_distal_phalanx_4',
                                                              #  Visualization sphere for <HAnimJoint name='l_ring3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_4'/> 
                                                              children=[
                                                              TouchSensor(description='HAnimJoint l_ring3, HAnimSegment l_carpal_distal_phalanx_4'),
                                                              Transform(translation=(0.1983,0.7045,-0.0767),
                                                                children=[
                                                                Shape(USE='HAnimJointShape')]),
                                                              #  HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ring3'/> to <HAnimSite name='l_ring_distal_tip'/> 
                                                              Shape(
                                                                geometry=LineSet(vertexCount=[2],
                                                                  coord=Coordinate(point=[(0.1983,0.7045,-0.0767),(0.2035,0.675,-0.0756)]),
                                                                  color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                              HAnimSite(DEF='hanim_l_carpal_distal_phalanx_4_pt',name='l_carpal_distal_phalanx_4_pt',translation=(0.2035,0.675,-0.0756),
                                                                #  HAnimSite visualization shape 
                                                                children=[
                                                                TouchSensor(description='HAnimSite l_ring_distal_tip'),
                                                                Shape(USE='HAnimSiteShape')])])])])])]),
                                                    HAnimJoint(DEF='hanim_l_carpometacarpal_5',center=(0.1925,0.8066,-0.1036),name='l_carpometacarpal_5',ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimSegment(DEF='hanim_l_metacarpal_5',name='l_metacarpal_5',
                                                        #  Visualization sphere for <HAnimJoint name='l_pinky0'/> is placed within <HAnimSegment name='l_metacarpal_5'/> 
                                                        children=[
                                                        TouchSensor(description='HAnimJoint l_pinky0, HAnimSegment l_metacarpal_5'),
                                                        Transform(translation=(0.1925,0.8066,-0.1036),
                                                          children=[
                                                          Shape(USE='HAnimJointShape')]),
                                                        #  HAnimSegment visualization line from current <HAnimJoint name='l_pinky0'/> to child <HAnimJoint name='l_pinky1'/> 
                                                        Shape(
                                                          geometry=LineSet(vertexCount=[2],
                                                            coord=Coordinate(point=[(0.1925,0.8066,-0.1036),(0.1925,0.7866,-0.1036)]),
                                                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                      HAnimJoint(DEF='hanim_l_metacarpophalangeal_5',center=(0.1925,0.7866,-0.1036),name='l_metacarpophalangeal_5',ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimSegment(DEF='hanim_l_carpal_proximal_phalanx_5',name='l_carpal_proximal_phalanx_5',
                                                          #  Visualization sphere for <HAnimJoint name='l_pinky1'/> is placed within <HAnimSegment name='l_carpal_proximal_phalanx_5'/> 
                                                          children=[
                                                          TouchSensor(description='HAnimJoint l_pinky1, HAnimSegment l_carpal_proximal_phalanx_5'),
                                                          Transform(translation=(0.1925,0.7866,-0.1036),
                                                            children=[
                                                            Shape(USE='HAnimJointShape')]),
                                                          #  HAnimSegment visualization line from current <HAnimJoint name='l_pinky1'/> to child <HAnimJoint name='l_pinky2'/> 
                                                          Shape(
                                                            geometry=LineSet(vertexCount=[2],
                                                              coord=Coordinate(point=[(0.1925,0.7866,-0.1036),(0.1938,0.7452,-0.1024)]),
                                                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                        HAnimJoint(DEF='hanim_l_carpal_proximal_interphalangeal_5',center=(0.1938,0.7452,-0.1024),name='l_carpal_proximal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimSegment(DEF='hanim_l_carpal_middle_phalanx_5',name='l_carpal_middle_phalanx_5',
                                                            #  Visualization sphere for <HAnimJoint name='l_pinky2'/> is placed within <HAnimSegment name='l_carpal_middle_phalanx_5'/> 
                                                            children=[
                                                            TouchSensor(description='HAnimJoint l_pinky2, HAnimSegment l_carpal_middle_phalanx_5'),
                                                            Transform(translation=(0.1938,0.7452,-0.1024),
                                                              children=[
                                                              Shape(USE='HAnimJointShape')]),
                                                            #  HAnimSegment visualization line from current <HAnimJoint name='l_pinky2'/> to child <HAnimJoint name='l_pinky3'/> 
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(0.1938,0.7452,-0.1024),(0.1948,0.7277,-0.1017)]),
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                          HAnimJoint(DEF='hanim_l_carpal_distal_interphalangeal_5',center=(0.1948,0.7277,-0.1017),name='l_carpal_distal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='hanim_l_carpal_distal_phalanx_5',name='l_carpal_distal_phalanx_5',
                                                              #  Visualization sphere for <HAnimJoint name='l_pinky3'/> is placed within <HAnimSegment name='l_carpal_distal_phalanx_5'/> 
                                                              children=[
                                                              TouchSensor(description='HAnimJoint l_pinky3, HAnimSegment l_carpal_distal_phalanx_5'),
                                                              Transform(translation=(0.1948,0.7277,-0.1017),
                                                                children=[
                                                                Shape(USE='HAnimJointShape')]),
                                                              #  HAnimSite visualization line segment from ancestor <HAnimJoint name='l_pinky3'/> to <HAnimSite name='l_pinky_distal_tip'/> 
                                                              Shape(
                                                                geometry=LineSet(vertexCount=[2],
                                                                  coord=Coordinate(point=[(0.1948,0.7277,-0.1017),(0.2014,0.7009,-0.1012)]),
                                                                  color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                              HAnimSite(DEF='hanim_l_carpal_distal_phalanx_5_pt',name='l_carpal_distal_phalanx_5_pt',translation=(0.2014,0.7009,-0.1012),
                                                                #  HAnimSite visualization shape 
                                                                children=[
                                                                TouchSensor(description='HAnimSite l_pinky_distal_tip'),
                                                                Shape(USE='HAnimSiteShape')])])])])])])])])])])]),
                                          HAnimJoint(DEF='hanim_r_sternoclavicular',center=(-0.082,1.4488,-0.0353),name='r_sternoclavicular',ulimit=[0,0,0],llimit=[0,0,0],
                                            children=[
                                            HAnimSegment(DEF='hanim_r_clavicle',name='r_clavicle',
                                              #  Visualization sphere for <HAnimJoint name='r_sternoclavicular'/> is placed within <HAnimSegment name='r_clavicle'/> 
                                              children=[
                                              TouchSensor(description='HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle'),
                                              Transform(translation=(-0.082,1.4488,-0.0353),
                                                children=[
                                                Shape(USE='HAnimJointShape')]),
                                              #  HAnimSegment visualization line from current <HAnimJoint name='r_sternoclavicular'/> to child <HAnimJoint name='r_acromioclavicular'/> 
                                              Shape(
                                                geometry=LineSet(vertexCount=[2],
                                                  coord=Coordinate(point=[(-0.082,1.4488,-0.0353),(-0.0962,1.4269,-0.0424)]),
                                                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                              #  HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_clavicale_pt'/> 
                                              Shape(
                                                geometry=LineSet(vertexCount=[2],
                                                  coord=Coordinate(point=[(-0.082,1.4488,-0.0353),(-0.0115,1.4943,0.04)]),
                                                  color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                              #  HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_acromion_pt'/> 
                                              Shape(
                                                geometry=LineSet(vertexCount=[2],
                                                  coord=Coordinate(point=[(-0.082,1.4488,-0.0353),(-0.1905,1.4791,-0.0431)]),
                                                  color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                              #  HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_ant_pt'/> 
                                              Shape(
                                                geometry=LineSet(vertexCount=[2],
                                                  coord=Coordinate(point=[(-0.082,1.4488,-0.0353),(-0.1626,1.4072,-0.0031)]),
                                                  color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                              #  HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_post_pt'/> 
                                              Shape(
                                                geometry=LineSet(vertexCount=[2],
                                                  coord=Coordinate(point=[(-0.082,1.4488,-0.0353),(-0.1603,1.4098,-0.0826)]),
                                                  color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                              HAnimSite(DEF='hanim_r_clavicle_pt',name='r_clavicle_pt',translation=(-0.0115,1.4943,0.04),
                                                #  HAnimSite visualization shape 
                                                children=[
                                                TouchSensor(description='HAnimSite r_clavicale_pt'),
                                                Shape(USE='HAnimSiteShape')]),
                                              HAnimSite(DEF='hanim_r_acromion_pt',name='r_acromion_pt',translation=(-0.1905,1.4791,-0.0431),
                                                #  HAnimSite visualization shape 
                                                children=[
                                                TouchSensor(description='HAnimSite r_acromion_pt'),
                                                Shape(USE='HAnimSiteShape')]),
                                              HAnimSite(DEF='hanim_r_axilla_proximal_pt',name='r_axilla_proximal_pt',translation=(-0.1626,1.4072,-0.0031),
                                                #  HAnimSite visualization shape 
                                                children=[
                                                TouchSensor(description='HAnimSite r_axilla_ant_pt'),
                                                Shape(USE='HAnimSiteShape')]),
                                              HAnimSite(DEF='hanim_r_axilla_distal_pt',name='r_axilla_distal_pt',translation=(-0.1603,1.4098,-0.0826),
                                                #  HAnimSite visualization shape 
                                                children=[
                                                TouchSensor(description='HAnimSite r_axilla_post_pt'),
                                                Shape(USE='HAnimSiteShape')])]),
                                            HAnimJoint(DEF='hanim_r_acromioclavicular',center=(-0.0962,1.4269,-0.0424),name='r_acromioclavicular',ulimit=[0,0,0],llimit=[0,0,0],
                                              children=[
                                              HAnimSegment(DEF='hanim_r_scapula',name='r_scapula',
                                                #  Visualization sphere for <HAnimJoint name='r_acromioclavicular'/> is placed within <HAnimSegment name='r_scapula'/> 
                                                children=[
                                                TouchSensor(description='HAnimJoint r_acromioclavicular, HAnimSegment r_scapula'),
                                                Transform(translation=(-0.0962,1.4269,-0.0424),
                                                  children=[
                                                  Shape(USE='HAnimJointShape')]),
                                                #  HAnimSegment visualization line from current <HAnimJoint name='r_acromioclavicular'/> to child <HAnimJoint name='r_shoulder'/> 
                                                Shape(
                                                  geometry=LineSet(vertexCount=[2],
                                                    coord=Coordinate(point=[(-0.0962,1.4269,-0.0424),(-0.2029,1.4376,-0.0387)]),
                                                    color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                              HAnimJoint(DEF='hanim_r_shoulder',center=(-0.2029,1.4376,-0.0387),name='r_shoulder',ulimit=[0,0,0],llimit=[0,0,0],
                                                children=[
                                                HAnimSegment(DEF='hanim_r_upperarm',name='r_upperarm',
                                                  #  Visualization sphere for <HAnimJoint name='r_shoulder'/> is placed within <HAnimSegment name='r_upperarm'/> 
                                                  children=[
                                                  TouchSensor(description='HAnimJoint r_shoulder, HAnimSegment r_upperarm'),
                                                  Transform(translation=(-0.2029,1.4376,-0.0387),
                                                    children=[
                                                    Shape(USE='HAnimJointShape')]),
                                                  #  HAnimSegment visualization line from current <HAnimJoint name='r_shoulder'/> to child <HAnimJoint name='r_elbow'/> 
                                                  Shape(
                                                    geometry=LineSet(vertexCount=[2],
                                                      coord=Coordinate(point=[(-0.2029,1.4376,-0.0387),(-0.2014,1.1357,-0.0682)]),
                                                      color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                  #  HAnimSite visualization line segment from ancestor <HAnimJoint name='r_shoulder'/> to <HAnimSite name='r_humeral_lateral_epicn_pt'/> 
                                                  Shape(
                                                    geometry=LineSet(vertexCount=[2],
                                                      coord=Coordinate(point=[(-0.2029,1.4376,-0.0387),(-0.2224,1.1517,-0.1033)]),
                                                      color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                  HAnimSite(DEF='hanim_r_humeral_lateral_epicondyle_pt',name='r_humeral_lateral_epicondyle_pt',translation=(-0.2224,1.1517,-0.1033),
                                                    #  HAnimSite visualization shape 
                                                    children=[
                                                    TouchSensor(description='HAnimSite r_humeral_lateral_epicn_pt'),
                                                    Shape(USE='HAnimSiteShape')])]),
                                                HAnimJoint(DEF='hanim_r_elbow',center=(-0.2014,1.1357,-0.0682),name='r_elbow',ulimit=[0,0,0],llimit=[0,0,0],
                                                  children=[
                                                  HAnimSegment(DEF='hanim_r_forearm',name='r_forearm',
                                                    #  Visualization sphere for <HAnimJoint name='r_elbow'/> is placed within <HAnimSegment name='r_forearm'/> 
                                                    children=[
                                                    TouchSensor(description='HAnimJoint r_elbow, HAnimSegment r_forearm'),
                                                    Transform(translation=(-0.2014,1.1357,-0.0682),
                                                      children=[
                                                      Shape(USE='HAnimJointShape')]),
                                                    #  HAnimSegment visualization line from current <HAnimJoint name='r_elbow'/> to child <HAnimJoint name='r_radiocarpal'/> 
                                                    Shape(
                                                      geometry=LineSet(vertexCount=[2],
                                                        coord=Coordinate(point=[(-0.2014,1.1357,-0.0682),(-0.1984,0.8663,-0.0583)]),
                                                        color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                    #  HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radial_styloid_pt'/> 
                                                    Shape(
                                                      geometry=LineSet(vertexCount=[2],
                                                        coord=Coordinate(point=[(-0.2014,1.1357,-0.0682),(-0.1884,0.8676,-0.036)]),
                                                        color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                    #  HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_olecranon_pt'/> 
                                                    Shape(
                                                      geometry=LineSet(vertexCount=[2],
                                                        coord=Coordinate(point=[(-0.2014,1.1357,-0.0682),(-0.1907,1.1405,-0.1065)]),
                                                        color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                    #  HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_humeral_medial_epicn_pt'/> 
                                                    Shape(
                                                      geometry=LineSet(vertexCount=[2],
                                                        coord=Coordinate(point=[(-0.2014,1.1357,-0.0682),(-0.168,1.1298,-0.1062)]),
                                                        color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                    #  HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radiale_pt'/> 
                                                    Shape(
                                                      geometry=LineSet(vertexCount=[2],
                                                        coord=Coordinate(point=[(-0.2014,1.1357,-0.0682),(-0.213,1.1305,-0.1091)]),
                                                        color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                    HAnimSite(DEF='hanim_r_radial_styloid_pt',name='r_radial_styloid_pt',translation=(-0.1884,0.8676,-0.036),
                                                      #  HAnimSite visualization shape 
                                                      children=[
                                                      TouchSensor(description='HAnimSite r_radial_styloid_pt'),
                                                      Shape(USE='HAnimSiteShape')]),
                                                    HAnimSite(DEF='hanim_r_olecranon_pt',name='r_olecranon_pt',translation=(-0.1907,1.1405,-0.1065),
                                                      #  HAnimSite visualization shape 
                                                      children=[
                                                      TouchSensor(description='HAnimSite r_olecranon_pt'),
                                                      Shape(USE='HAnimSiteShape')]),
                                                    HAnimSite(DEF='hanim_r_humeral_medial_epicondyle_pt',name='r_humeral_medial_epicondyle_pt',translation=(-0.168,1.1298,-0.1062),
                                                      #  HAnimSite visualization shape 
                                                      children=[
                                                      TouchSensor(description='HAnimSite r_humeral_medial_epicn_pt'),
                                                      Shape(USE='HAnimSiteShape')]),
                                                    HAnimSite(DEF='hanim_r_radiale_pt',name='r_radiale_pt',translation=(-0.213,1.1305,-0.1091),
                                                      #  HAnimSite visualization shape 
                                                      children=[
                                                      TouchSensor(description='HAnimSite r_radiale_pt'),
                                                      Shape(USE='HAnimSiteShape')])]),
                                                  HAnimJoint(DEF='hanim_r_radiocarpal',center=(-0.1984,0.8663,-0.0583),name='r_radiocarpal',ulimit=[0,0,0],llimit=[0,0,0],
                                                    children=[
                                                    HAnimSegment(DEF='hanim_r_carpal',name='r_carpal',
                                                      #  Visualization sphere for <HAnimJoint name='r_radiocarpal'/> is placed within <HAnimSegment name='r_carpal'/> 
                                                      children=[
                                                      TouchSensor(description='HAnimJoint r_radiocarpal, HAnimSegment r_carpal'),
                                                      Transform(translation=(-0.1984,0.8663,-0.0583),
                                                        children=[
                                                        Shape(USE='HAnimJointShape')]),
                                                      #  HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_thumb1'/> 
                                                      Shape(
                                                        geometry=LineSet(vertexCount=[2],
                                                          coord=Coordinate(point=[(-0.1984,0.8663,-0.0583),(-0.1924,0.8472,-0.0534)]),
                                                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                      #  HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_index0'/> 
                                                      Shape(
                                                        geometry=LineSet(vertexCount=[2],
                                                          coord=Coordinate(point=[(-0.1984,0.8663,-0.0583),(-0.1983,0.8024,-0.028)]),
                                                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                      #  HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_middle0'/> 
                                                      Shape(
                                                        geometry=LineSet(vertexCount=[2],
                                                          coord=Coordinate(point=[(-0.1984,0.8663,-0.0583),(-0.1987,0.8029,-0.053)]),
                                                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                      #  HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_ring0'/> 
                                                      Shape(
                                                        geometry=LineSet(vertexCount=[2],
                                                          coord=Coordinate(point=[(-0.1984,0.8663,-0.0583),(-0.1956,0.8019,-0.0794)]),
                                                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                      #  HAnimSegment visualization line from current <HAnimJoint name='r_radiocarpal'/> to child <HAnimJoint name='r_pinky0'/> 
                                                      Shape(
                                                        geometry=LineSet(vertexCount=[2],
                                                          coord=Coordinate(point=[(-0.1984,0.8663,-0.0583),(-0.1925,0.8066,-0.1036)]),
                                                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                      #  HAnimSite visualization line segment from ancestor <HAnimJoint name='r_radiocarpal'/> to <HAnimSite name='r_metacarpal_pha2_pt'/> 
                                                      Shape(
                                                        geometry=LineSet(vertexCount=[2],
                                                          coord=Coordinate(point=[(-0.1984,0.8663,-0.0583),(-0.1977,0.8169,-0.0177)]),
                                                          color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                      #  HAnimSite visualization line segment from ancestor <HAnimJoint name='r_radiocarpal'/> to <HAnimSite name='r_ulnar_styloid_pt'/> 
                                                      Shape(
                                                        geometry=LineSet(vertexCount=[2],
                                                          coord=Coordinate(point=[(-0.1984,0.8663,-0.0583),(-0.2117,0.8562,-0.0584)]),
                                                          color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                      #  HAnimSite visualization line segment from ancestor <HAnimJoint name='r_radiocarpal'/> to <HAnimSite name='r_metacarpal_pha5_pt'/> 
                                                      Shape(
                                                        geometry=LineSet(vertexCount=[2],
                                                          coord=Coordinate(point=[(-0.1984,0.8663,-0.0583),(-0.1929,0.789,-0.1064)]),
                                                          color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                      #  HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_radiocarpal'/> to <HAnimSite name='r_hand_front_view'/> 
                                                      Shape(
                                                        geometry=LineSet(vertexCount=[2],
                                                          coord=Coordinate(point=[(-0.1984,0.8663,-0.0583),(-0.3,0.75,0.45)]),
                                                          color=ColorRGBA(USE='HAnimSiteViewpointLineColorRGBA'))),
                                                      HAnimSite(DEF='hanim_r_metacarpal_phalanx_2_pt',name='r_metacarpal_phalanx_2_pt',translation=(-0.1977,0.8169,-0.0177),
                                                        #  HAnimSite visualization shape 
                                                        children=[
                                                        TouchSensor(description='HAnimSite r_metacarpal_pha2_pt'),
                                                        Shape(USE='HAnimSiteShape')]),
                                                      HAnimSite(DEF='hanim_r_ulnar_styloid_pt',name='r_ulnar_styloid_pt',translation=(-0.2117,0.8562,-0.0584),
                                                        #  HAnimSite visualization shape 
                                                        children=[
                                                        TouchSensor(description='HAnimSite r_ulnar_styloid_pt'),
                                                        Shape(USE='HAnimSiteShape')]),
                                                      HAnimSite(DEF='hanim_r_metacarpal_phalanx_5_pt',name='r_metacarpal_phalanx_5_pt',translation=(-0.1929,0.789,-0.1064),
                                                        #  HAnimSite visualization shape 
                                                        children=[
                                                        TouchSensor(description='HAnimSite r_metacarpal_pha5_pt'),
                                                        Shape(USE='HAnimSiteShape')]),
                                                      HAnimSite(DEF='hanim_r_hand_front_view',name='r_hand_front_view',translation=(-0.3,0.75,0.45),
                                                        #  HAnimSite visualization shape 
                                                        children=[
                                                        TouchSensor(description='HAnimSite r_hand_front_view'),
                                                        Shape(USE='HAnimSiteShape'),
                                                        Viewpoint(DEF='hanim_r_hand_front_viewpoint',centerOfRotation=(0,0.7,0),description='right hand front',position=(0,0,0)),
                                                        #  HAnimSite/Viewpoint visualization shape 
                                                        Anchor(description='HAnimSite hanim_r_hand_front_view Viewpoint',url=["#hanim_r_hand_front_viewpoint"],
                                                          children=[
                                                          LOD(forceTransitions=True,range=[0.04],
                                                            children=[
                                                            WorldInfo(info=["hide diamond when close"]),
                                                            Shape(USE='HAnimSiteViewpointShape')])])])]),
                                                    HAnimJoint(DEF='hanim_r_carpometacarpal_1',center=(-0.1924,0.8472,-0.0534),name='r_carpometacarpal_1',ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimSegment(DEF='hanim_r_metacarpal_1',name='r_metacarpal_1',
                                                        #  Visualization sphere for <HAnimJoint name='r_thumb1'/> is placed within <HAnimSegment name='r_metacarpal_1'/> 
                                                        children=[
                                                        TouchSensor(description='HAnimJoint r_thumb1, HAnimSegment r_metacarpal_1'),
                                                        Transform(translation=(-0.1924,0.8472,-0.0534),
                                                          children=[
                                                          Shape(USE='HAnimJointShape')]),
                                                        #  HAnimSegment visualization line from current <HAnimJoint name='r_thumb1'/> to child <HAnimJoint name='r_thumb2'/> 
                                                        Shape(
                                                          geometry=LineSet(vertexCount=[2],
                                                            coord=Coordinate(point=[(-0.1924,0.8472,-0.0534),(-0.1951,0.8226,0.0246)]),
                                                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                      HAnimJoint(DEF='hanim_r_metacarpophalangeal_1',center=(-0.1951,0.8226,0.0246),name='r_metacarpophalangeal_1',ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimSegment(DEF='hanim_r_carpal_proximal_phalanx_1',name='r_carpal_proximal_phalanx_1',
                                                          #  Visualization sphere for <HAnimJoint name='r_thumb2'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_1'/> 
                                                          children=[
                                                          TouchSensor(description='HAnimJoint r_thumb2, HAnimSegment r_carpal_proximal_phalanx_1'),
                                                          Transform(translation=(-0.1951,0.8226,0.0246),
                                                            children=[
                                                            Shape(USE='HAnimJointShape')]),
                                                          #  HAnimSegment visualization line from current <HAnimJoint name='r_thumb2'/> to child <HAnimJoint name='r_thumb3'/> 
                                                          Shape(
                                                            geometry=LineSet(vertexCount=[2],
                                                              coord=Coordinate(point=[(-0.1951,0.8226,0.0246),(-0.1955,0.8159,0.0464)]),
                                                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                        HAnimJoint(DEF='hanim_r_carpal_interphalangeal_1',center=(-0.1955,0.8159,0.0464),name='r_carpal_interphalangeal_1',ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimSegment(DEF='hanim_r_carpal_distal_phalanx_1',name='r_carpal_distal_phalanx_1',
                                                            #  Visualization sphere for <HAnimJoint name='r_thumb3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_1'/> 
                                                            children=[
                                                            TouchSensor(description='HAnimJoint r_thumb3, HAnimSegment r_carpal_distal_phalanx_1'),
                                                            Transform(translation=(-0.1955,0.8159,0.0464),
                                                              children=[
                                                              Shape(USE='HAnimJointShape')]),
                                                            #  HAnimSite visualization line segment from ancestor <HAnimJoint name='r_thumb3'/> to <HAnimSite name='r_thumb_distal_tip'/> 
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(-0.1955,0.8159,0.0464),(-0.1869,0.809,0.082)]),
                                                                color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                            HAnimSite(DEF='hanim_r_carpal_distal_phalanx_1_pt',name='r_carpal_distal_phalanx_1_pt',translation=(-0.1869,0.809,0.082),
                                                              #  HAnimSite visualization shape 
                                                              children=[
                                                              TouchSensor(description='HAnimSite r_thumb_distal_tip'),
                                                              Shape(USE='HAnimSiteShape')])])])])]),
                                                    HAnimJoint(DEF='hanim_r_carpometacarpal_2',center=(-0.1983,0.8024,-0.028),name='r_carpometacarpal_2',ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimSegment(DEF='hanim_r_metacarpal_2',name='r_metacarpal_2',
                                                        #  Visualization sphere for <HAnimJoint name='r_index0'/> is placed within <HAnimSegment name='r_metacarpal_2'/> 
                                                        children=[
                                                        TouchSensor(description='HAnimJoint r_index0, HAnimSegment r_metacarpal_2'),
                                                        Transform(translation=(-0.1983,0.8024,-0.028),
                                                          children=[
                                                          Shape(USE='HAnimJointShape')]),
                                                        #  HAnimSegment visualization line from current <HAnimJoint name='r_index0'/> to child <HAnimJoint name='r_index1'/> 
                                                        Shape(
                                                          geometry=LineSet(vertexCount=[2],
                                                            coord=Coordinate(point=[(-0.1983,0.8024,-0.028),(-0.1983,0.7815,-0.028)]),
                                                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                      HAnimJoint(DEF='hanim_r_metacarpophalangeal_2',center=(-0.1983,0.7815,-0.028),name='r_metacarpophalangeal_2',ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimSegment(DEF='hanim_r_carpal_proximal_phalanx_2',name='r_carpal_proximal_phalanx_2',
                                                          #  Visualization sphere for <HAnimJoint name='r_index1'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_2'/> 
                                                          children=[
                                                          TouchSensor(description='HAnimJoint r_index1, HAnimSegment r_carpal_proximal_phalanx_2'),
                                                          Transform(translation=(-0.1983,0.7815,-0.028),
                                                            children=[
                                                            Shape(USE='HAnimJointShape')]),
                                                          #  HAnimSegment visualization line from current <HAnimJoint name='r_index1'/> to child <HAnimJoint name='r_index2'/> 
                                                          Shape(
                                                            geometry=LineSet(vertexCount=[2],
                                                              coord=Coordinate(point=[(-0.1983,0.7815,-0.028),(-0.2017,0.7363,-0.0248)]),
                                                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                        HAnimJoint(DEF='hanim_r_carpal_proximal_interphalangeal_2',center=(-0.2017,0.7363,-0.0248),name='r_carpal_proximal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimSegment(DEF='hanim_r_carpal_middle_phalanx_2',name='r_carpal_middle_phalanx_2',
                                                            #  Visualization sphere for <HAnimJoint name='r_index2'/> is placed within <HAnimSegment name='r_carpal_middle_phalanx_2'/> 
                                                            children=[
                                                            TouchSensor(description='HAnimJoint r_index2, HAnimSegment r_carpal_middle_phalanx_2'),
                                                            Transform(translation=(-0.2017,0.7363,-0.0248),
                                                              children=[
                                                              Shape(USE='HAnimJointShape')]),
                                                            #  HAnimSegment visualization line from current <HAnimJoint name='r_index2'/> to child <HAnimJoint name='r_index3'/> 
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(-0.2017,0.7363,-0.0248),(-0.2028,0.7139,-0.0236)]),
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                          HAnimJoint(DEF='hanim_r_carpal_distal_interphalangeal_2',center=(-0.2028,0.7139,-0.0236),name='r_carpal_distal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='hanim_r_carpal_distal_phalanx_2',name='r_carpal_distal_phalanx_2',
                                                              #  Visualization sphere for <HAnimJoint name='r_index3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_2'/> 
                                                              children=[
                                                              TouchSensor(description='HAnimJoint r_index3, HAnimSegment r_carpal_distal_phalanx_2'),
                                                              Transform(translation=(-0.2028,0.7139,-0.0236),
                                                                children=[
                                                                Shape(USE='HAnimJointShape')]),
                                                              #  HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_index_distal_tip'/> 
                                                              Shape(
                                                                geometry=LineSet(vertexCount=[2],
                                                                  coord=Coordinate(point=[(-0.2028,0.7139,-0.0236),(-0.198,0.6883,-0.018)]),
                                                                  color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                              #  HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_dactylion_pt'/> 
                                                              Shape(
                                                                geometry=LineSet(vertexCount=[2],
                                                                  coord=Coordinate(point=[(-0.2028,0.7139,-0.0236),(-0.1941,0.6772,-0.0423)]),
                                                                  color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                              HAnimSite(DEF='hanim_r_carpal_distal_phalanx_2_pt',name='r_carpal_distal_phalanx_2_pt',translation=(-0.198,0.6883,-0.018),
                                                                #  HAnimSite visualization shape 
                                                                children=[
                                                                TouchSensor(description='HAnimSite r_index_distal_tip'),
                                                                Shape(USE='HAnimSiteShape')]),
                                                              HAnimSite(DEF='hanim_r_dactylion_pt',name='r_dactylion_pt',translation=(-0.1941,0.6772,-0.0423),
                                                                #  HAnimSite visualization shape 
                                                                children=[
                                                                TouchSensor(description='HAnimSite r_dactylion_pt'),
                                                                Shape(USE='HAnimSiteShape')])])])])])]),
                                                    HAnimJoint(DEF='hanim_r_carpometacarpal_3',center=(-0.1987,0.8029,-0.053),name='r_carpometacarpal_3',ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimSegment(DEF='hanim_r_metacarpal_3',name='r_metacarpal_3',
                                                        #  Visualization sphere for <HAnimJoint name='r_middle0'/> is placed within <HAnimSegment name='r_metacarpal_3'/> 
                                                        children=[
                                                        TouchSensor(description='HAnimJoint r_middle0, HAnimSegment r_metacarpal_3'),
                                                        Transform(translation=(-0.1987,0.8029,-0.053),
                                                          children=[
                                                          Shape(USE='HAnimJointShape')]),
                                                        #  HAnimSegment visualization line from current <HAnimJoint name='r_middle0'/> to child <HAnimJoint name='r_middle1'/> 
                                                        Shape(
                                                          geometry=LineSet(vertexCount=[2],
                                                            coord=Coordinate(point=[(-0.1987,0.8029,-0.053),(-0.1987,0.7818,-0.053)]),
                                                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                      HAnimJoint(DEF='hanim_r_metacarpophalangeal_3',center=(-0.1987,0.7818,-0.053),name='r_metacarpophalangeal_3',ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimSegment(DEF='hanim_r_carpal_proximal_phalanx_3',name='r_carpal_proximal_phalanx_3',
                                                          #  Visualization sphere for <HAnimJoint name='r_middle1'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_3'/> 
                                                          children=[
                                                          TouchSensor(description='HAnimJoint r_middle1, HAnimSegment r_carpal_proximal_phalanx_3'),
                                                          Transform(translation=(-0.1987,0.7818,-0.053),
                                                            children=[
                                                            Shape(USE='HAnimJointShape')]),
                                                          #  HAnimSegment visualization line from current <HAnimJoint name='r_middle1'/> to child <HAnimJoint name='r_middle2'/> 
                                                          Shape(
                                                            geometry=LineSet(vertexCount=[2],
                                                              coord=Coordinate(point=[(-0.1987,0.7818,-0.053),(-0.2013,0.7273,-0.0503)]),
                                                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                        HAnimJoint(DEF='hanim_r_carpal_proximal_interphalangeal_3',center=(-0.2013,0.7273,-0.0503),name='r_carpal_proximal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimSegment(DEF='hanim_r_carpal_middle_phalanx_3',name='r_carpal_middle_phalanx_3',
                                                            #  Visualization sphere for <HAnimJoint name='r_middle2'/> is placed within <HAnimSegment name='r_carpal_middle_phalanx_3'/> 
                                                            children=[
                                                            TouchSensor(description='HAnimJoint r_middle2, HAnimSegment r_carpal_middle_phalanx_3'),
                                                            Transform(translation=(-0.2013,0.7273,-0.0503),
                                                              children=[
                                                              Shape(USE='HAnimJointShape')]),
                                                            #  HAnimSegment visualization line from current <HAnimJoint name='r_middle2'/> to child <HAnimJoint name='r_middle3'/> 
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(-0.2013,0.7273,-0.0503),(-0.2026,0.7011,-0.0494)]),
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                          HAnimJoint(DEF='hanim_r_carpal_distal_interphalangeal_3',center=(-0.2026,0.7011,-0.0494),name='r_carpal_distal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='hanim_r_carpal_distal_phalanx_3',name='r_carpal_distal_phalanx_3',
                                                              #  Visualization sphere for <HAnimJoint name='r_middle3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_3'/> 
                                                              children=[
                                                              TouchSensor(description='HAnimJoint r_middle3, HAnimSegment r_carpal_distal_phalanx_3'),
                                                              Transform(translation=(-0.2026,0.7011,-0.0494),
                                                                children=[
                                                                Shape(USE='HAnimJointShape')]),
                                                              #  HAnimSite visualization line segment from ancestor <HAnimJoint name='r_middle3'/> to <HAnimSite name='r_middle_distal_tip'/> 
                                                              Shape(
                                                                geometry=LineSet(vertexCount=[2],
                                                                  coord=Coordinate(point=[(-0.2026,0.7011,-0.0494),(-0.1969,0.6758,-0.0427)]),
                                                                  color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                              HAnimSite(DEF='hanim_r_carpal_distal_phalanx_3_pt',name='r_carpal_distal_phalanx_3_pt',translation=(-0.1969,0.6758,-0.0427),
                                                                #  HAnimSite visualization shape 
                                                                children=[
                                                                TouchSensor(description='HAnimSite r_middle_distal_tip'),
                                                                Shape(USE='HAnimSiteShape')])])])])])]),
                                                    HAnimJoint(DEF='hanim_r_carpometacarpal_4',center=(-0.1956,0.8019,-0.0794),name='r_carpometacarpal_4',ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimSegment(DEF='hanim_r_metacarpal_4',name='r_metacarpal_4',
                                                        #  Visualization sphere for <HAnimJoint name='r_ring0'/> is placed within <HAnimSegment name='r_metacarpal_4'/> 
                                                        children=[
                                                        TouchSensor(description='HAnimJoint r_ring0, HAnimSegment r_metacarpal_4'),
                                                        Transform(translation=(-0.1956,0.8019,-0.0794),
                                                          children=[
                                                          Shape(USE='HAnimJointShape')]),
                                                        #  HAnimSegment visualization line from current <HAnimJoint name='r_ring0'/> to child <HAnimJoint name='r_ring1'/> 
                                                        Shape(
                                                          geometry=LineSet(vertexCount=[2],
                                                            coord=Coordinate(point=[(-0.1956,0.8019,-0.0794),(-0.1956,0.7815,-0.0794)]),
                                                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                      HAnimJoint(DEF='hanim_r_metacarpophalangeal_4',center=(-0.1956,0.7815,-0.0794),name='r_metacarpophalangeal_4',ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimSegment(DEF='hanim_r_carpal_proximal_phalanx_4',name='r_carpal_proximal_phalanx_4',
                                                          #  Visualization sphere for <HAnimJoint name='r_ring1'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_4'/> 
                                                          children=[
                                                          TouchSensor(description='HAnimJoint r_ring1, HAnimSegment r_carpal_proximal_phalanx_4'),
                                                          Transform(translation=(-0.1956,0.7815,-0.0794),
                                                            children=[
                                                            Shape(USE='HAnimJointShape')]),
                                                          #  HAnimSegment visualization line from current <HAnimJoint name='r_ring1'/> to child <HAnimJoint name='r_ring2'/> 
                                                          Shape(
                                                            geometry=LineSet(vertexCount=[2],
                                                              coord=Coordinate(point=[(-0.1956,0.7815,-0.0794),(-0.1973,0.7287,-0.0777)]),
                                                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                        HAnimJoint(DEF='hanim_r_carpal_proximal_interphalangeal_4',center=(-0.1973,0.7287,-0.0777),name='r_carpal_proximal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimSegment(DEF='hanim_r_carpal_middle_phalanx_4',name='r_carpal_middle_phalanx_4',
                                                            #  Visualization sphere for <HAnimJoint name='r_ring2'/> is placed within <HAnimSegment name='r_carpal_middle_phalanx_4'/> 
                                                            children=[
                                                            TouchSensor(description='HAnimJoint r_ring2, HAnimSegment r_carpal_middle_phalanx_4'),
                                                            Transform(translation=(-0.1973,0.7287,-0.0777),
                                                              children=[
                                                              Shape(USE='HAnimJointShape')]),
                                                            #  HAnimSegment visualization line from current <HAnimJoint name='r_ring2'/> to child <HAnimJoint name='r_ring3'/> 
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(-0.1973,0.7287,-0.0777),(-0.1983,0.7045,-0.0767)]),
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                          HAnimJoint(DEF='hanim_r_carpal_distal_interphalangeal_4',center=(-0.1983,0.7045,-0.0767),name='r_carpal_distal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='hanim_r_carpal_distal_phalanx_4',name='r_carpal_distal_phalanx_4',
                                                              #  Visualization sphere for <HAnimJoint name='r_ring3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_4'/> 
                                                              children=[
                                                              TouchSensor(description='HAnimJoint r_ring3, HAnimSegment r_carpal_distal_phalanx_4'),
                                                              Transform(translation=(-0.1983,0.7045,-0.0767),
                                                                children=[
                                                                Shape(USE='HAnimJointShape')]),
                                                              #  HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ring3'/> to <HAnimSite name='r_ring_distal_tip'/> 
                                                              Shape(
                                                                geometry=LineSet(vertexCount=[2],
                                                                  coord=Coordinate(point=[(-0.1983,0.7045,-0.0767),(-0.1934,0.6778,-0.0693)]),
                                                                  color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                              HAnimSite(DEF='hanim_r_carpal_distal_phalanx_4_pt',name='r_carpal_distal_phalanx_4_pt',translation=(-0.1934,0.6778,-0.0693),
                                                                #  HAnimSite visualization shape 
                                                                children=[
                                                                TouchSensor(description='HAnimSite r_ring_distal_tip'),
                                                                Shape(USE='HAnimSiteShape')])])])])])]),
                                                    HAnimJoint(DEF='hanim_r_carpometacarpal_5',center=(-0.1925,0.8066,-0.1036),name='r_carpometacarpal_5',ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimSegment(DEF='hanim_r_metacarpal_5',name='r_metacarpal_5',
                                                        #  Visualization sphere for <HAnimJoint name='r_pinky0'/> is placed within <HAnimSegment name='r_metacarpal_5'/> 
                                                        children=[
                                                        TouchSensor(description='HAnimJoint r_pinky0, HAnimSegment r_metacarpal_5'),
                                                        Transform(translation=(-0.1925,0.8066,-0.1036),
                                                          children=[
                                                          Shape(USE='HAnimJointShape')]),
                                                        #  HAnimSegment visualization line from current <HAnimJoint name='r_pinky0'/> to child <HAnimJoint name='r_pinky1'/> 
                                                        Shape(
                                                          geometry=LineSet(vertexCount=[2],
                                                            coord=Coordinate(point=[(-0.1925,0.8066,-0.1036),(-0.1925,0.7866,-0.1036)]),
                                                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                      HAnimJoint(DEF='hanim_r_metacarpophalangeal_5',center=(-0.1925,0.7866,-0.1036),name='r_metacarpophalangeal_5',ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimSegment(DEF='hanim_r_carpal_proximal_phalanx_5',name='r_carpal_proximal_phalanx_5',
                                                          #  Visualization sphere for <HAnimJoint name='r_pinky1'/> is placed within <HAnimSegment name='r_carpal_proximal_phalanx_5'/> 
                                                          children=[
                                                          TouchSensor(description='HAnimJoint r_pinky1, HAnimSegment r_carpal_proximal_phalanx_5'),
                                                          Transform(translation=(-0.1925,0.7866,-0.1036),
                                                            children=[
                                                            Shape(USE='HAnimJointShape')]),
                                                          #  HAnimSegment visualization line from current <HAnimJoint name='r_pinky1'/> to child <HAnimJoint name='r_pinky2'/> 
                                                          Shape(
                                                            geometry=LineSet(vertexCount=[2],
                                                              coord=Coordinate(point=[(-0.1925,0.7866,-0.1036),(-0.1938,0.7452,-0.1024)]),
                                                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                        HAnimJoint(DEF='hanim_r_carpal_proximal_interphalangeal_5',center=(-0.1938,0.7452,-0.1024),name='r_carpal_proximal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimSegment(DEF='hanim_r_carpal_middle_phalanx_5',name='r_carpal_middle_phalanx_5',
                                                            #  Visualization sphere for <HAnimJoint name='r_pinky2'/> is placed within <HAnimSegment name='r_carpal_middle_phalanx_5'/> 
                                                            children=[
                                                            TouchSensor(description='HAnimJoint r_pinky2, HAnimSegment r_carpal_middle_phalanx_5'),
                                                            Transform(translation=(-0.1938,0.7452,-0.1024),
                                                              children=[
                                                              Shape(USE='HAnimJointShape')]),
                                                            #  HAnimSegment visualization line from current <HAnimJoint name='r_pinky2'/> to child <HAnimJoint name='r_pinky3'/> 
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(-0.1938,0.7452,-0.1024),(-0.1948,0.7277,-0.1017)]),
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                          HAnimJoint(DEF='hanim_r_carpal_distal_interphalangeal_5',center=(-0.1948,0.7277,-0.1017),name='r_carpal_distal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='hanim_r_carpal_distal_phalanx_5',name='r_carpal_distal_phalanx_5',
                                                              #  Visualization sphere for <HAnimJoint name='r_pinky3'/> is placed within <HAnimSegment name='r_carpal_distal_phalanx_5'/> 
                                                              children=[
                                                              TouchSensor(description='HAnimJoint r_pinky3, HAnimSegment r_carpal_distal_phalanx_5'),
                                                              Transform(translation=(-0.1948,0.7277,-0.1017),
                                                                children=[
                                                                Shape(USE='HAnimJointShape')]),
                                                              #  HAnimSite visualization line segment from ancestor <HAnimJoint name='r_pinky3'/> to <HAnimSite name='r_pinky_distal_tip'/> 
                                                              Shape(
                                                                geometry=LineSet(vertexCount=[2],
                                                                  coord=Coordinate(point=[(-0.1948,0.7277,-0.1017),(-0.1938,0.7035,-0.0949)]),
                                                                  color=ColorRGBA(USE='HAnimSiteLineColorRGBA'))),
                                                              HAnimSite(DEF='hanim_r_carpal_distal_phalanx_5_pt',name='r_carpal_distal_phalanx_5_pt',translation=(-0.1938,0.7035,-0.0949),
                                                                #  HAnimSite visualization shape 
                                                                children=[
                                                                TouchSensor(description='HAnimSite r_pinky_distal_tip'),
                                                                Shape(USE='HAnimSiteShape')])])])])])])])])])])])])])])])])])])])])])])])])])])])])]),],
      sites=[
      HAnimSite(USE='hanim_crotch_pt'),
      HAnimSite(USE='hanim_skull_vertex_pt'),
      HAnimSite(USE='hanim_sellion_pt'),
      HAnimSite(USE='hanim_supramenton_pt'),
      HAnimSite(USE='hanim_nuchale_pt'),
      HAnimSite(USE='hanim_suprasternale_pt'),
      HAnimSite(USE='hanim_cervicale_pt'),
      HAnimSite(USE='hanim_substernale_pt'),
      HAnimSite(USE='hanim_rib10_midspine_pt'),
      HAnimSite(USE='hanim_waist_preferred_posterior_pt'),
      HAnimSite(USE='hanim_navel_pt'),
      HAnimSite(USE='hanim_l_acromion_pt'),
      HAnimSite(USE='hanim_r_acromion_pt'),
      HAnimSite(USE='hanim_r_asis_pt'),
      HAnimSite(USE='hanim_l_asis_pt'),
      HAnimSite(USE='hanim_l_axilla_distal_pt'),
      HAnimSite(USE='hanim_r_axilla_distal_pt'),
      HAnimSite(USE='hanim_l_axilla_proximal_pt'),
      HAnimSite(USE='hanim_r_axilla_proximal_pt'),
      HAnimSite(USE='hanim_l_calcaneus_posterior_pt'),
      HAnimSite(USE='hanim_r_calcaneus_posterior_pt'),
      HAnimSite(USE='hanim_l_carpal_distal_phalanx_1_pt'),
      HAnimSite(USE='hanim_r_carpal_distal_phalanx_1_pt'),
      HAnimSite(USE='hanim_l_carpal_distal_phalanx_2_pt'),
      HAnimSite(USE='hanim_r_carpal_distal_phalanx_2_pt'),
      HAnimSite(USE='hanim_l_carpal_distal_phalanx_3_pt'),
      HAnimSite(USE='hanim_r_carpal_distal_phalanx_3_pt'),
      HAnimSite(USE='hanim_l_carpal_distal_phalanx_4_pt'),
      HAnimSite(USE='hanim_r_carpal_distal_phalanx_4_pt'),
      HAnimSite(USE='hanim_l_carpal_distal_phalanx_5_pt'),
      HAnimSite(USE='hanim_r_carpal_distal_phalanx_5_pt'),
      HAnimSite(USE='hanim_l_clavicle_pt'),
      HAnimSite(USE='hanim_r_clavicle_pt'),
      HAnimSite(USE='hanim_l_dactylion_pt'),
      HAnimSite(USE='hanim_r_dactylion_pt'),
      HAnimSite(USE='hanim_l_femoral_lateral_epicondyle_pt'),
      HAnimSite(USE='hanim_r_femoral_lateral_epicondyle_pt'),
      HAnimSite(USE='hanim_l_femoral_medial_epicondyle_pt'),
      HAnimSite(USE='hanim_r_femoral_medial_epicondyle_pt'),
      HAnimSite(USE='hanim_l_forefoot_tip_pt'),
      HAnimSite(USE='hanim_r_forefoot_tip_pt'),
      HAnimSite(USE='hanim_r_gonion_pt'),
      HAnimSite(USE='hanim_l_gonion_pt'),
      HAnimSite(USE='hanim_l_humeral_lateral_epicondyle_pt'),
      HAnimSite(USE='hanim_r_humeral_lateral_epicondyle_pt'),
      HAnimSite(USE='hanim_l_humeral_medial_epicondyle_pt'),
      HAnimSite(USE='hanim_r_humeral_medial_epicondyle_pt'),
      HAnimSite(USE='hanim_r_iliocristale_pt'),
      HAnimSite(USE='hanim_l_iliocristale_pt'),
      HAnimSite(USE='hanim_r_infraorbitale_pt'),
      HAnimSite(USE='hanim_l_infraorbitale_pt'),
      HAnimSite(USE='hanim_l_knee_crease_pt'),
      HAnimSite(USE='hanim_r_knee_crease_pt'),
      HAnimSite(USE='hanim_l_lateral_malleolus_pt'),
      HAnimSite(USE='hanim_r_lateral_malleolus_pt'),
      HAnimSite(USE='hanim_l_medial_malleolus_pt'),
      HAnimSite(USE='hanim_r_medial_malleolus_pt'),
      HAnimSite(USE='hanim_l_metacarpal_phalanx_2_pt'),
      HAnimSite(USE='hanim_r_metacarpal_phalanx_2_pt'),
      HAnimSite(USE='hanim_l_metacarpal_phalanx_5_pt'),
      HAnimSite(USE='hanim_r_metacarpal_phalanx_5_pt'),
      HAnimSite(USE='hanim_l_metatarsal_phalanx_1_pt'),
      HAnimSite(USE='hanim_r_metatarsal_phalanx_1_pt'),
      HAnimSite(USE='hanim_l_metatarsal_phalanx_5_pt'),
      HAnimSite(USE='hanim_r_metatarsal_phalanx_5_pt'),
      HAnimSite(USE='hanim_r_neck_base_pt'),
      HAnimSite(USE='hanim_l_neck_base_pt'),
      HAnimSite(USE='hanim_l_olecranon_pt'),
      HAnimSite(USE='hanim_r_olecranon_pt'),
      HAnimSite(USE='hanim_r_psis_pt'),
      HAnimSite(USE='hanim_l_psis_pt'),
      HAnimSite(USE='hanim_l_radial_styloid_pt'),
      HAnimSite(USE='hanim_r_radial_styloid_pt'),
      HAnimSite(USE='hanim_l_radiale_pt'),
      HAnimSite(USE='hanim_r_radiale_pt'),
      HAnimSite(USE='hanim_r_rib10_pt'),
      HAnimSite(USE='hanim_l_rib10_pt'),
      HAnimSite(USE='hanim_temporomandibular_l_site_pt'),
      HAnimSite(USE='hanim_temporomandibular_r_site_pt'),
      HAnimSite(USE='hanim_l_sphyrion_pt'),
      HAnimSite(USE='hanim_r_sphyrion_pt'),
      HAnimSite(USE='hanim_l_tarsal_distal_phalanx_2_pt'),
      HAnimSite(USE='hanim_r_tarsal_distal_phalanx_2_pt'),
      HAnimSite(USE='hanim_r_thelion_pt'),
      HAnimSite(USE='hanim_l_thelion_pt'),
      HAnimSite(USE='hanim_r_tragion_pt'),
      HAnimSite(USE='hanim_l_tragion_pt'),
      HAnimSite(USE='hanim_r_trochanterion_pt'),
      HAnimSite(USE='hanim_l_trochanterion_pt'),
      HAnimSite(USE='hanim_l_ulnar_styloid_pt'),
      HAnimSite(USE='hanim_r_ulnar_styloid_pt')],
      viewpoints=[
      HAnimSite(DEF='hanim_l_inclined_view',name='l_inclined_view',rotation=(-0.113,0.993,0.0347,0.671),translation=(1.62,1.05,2.06),
        #  HAnimSite visualization shape 
        children=[
        TouchSensor(description='HAnimSite l_inclined_view'),
        Shape(USE='HAnimSiteShape'),
        Viewpoint(DEF='hanim_l_inclined_viewpoint',description='left inclined',position=(0,0,0)),
        #  HAnimSite/Viewpoint visualization shape 
        Anchor(description='HAnimSite hanim_l_inclined_view Viewpoint',url=["#hanim_l_inclined_viewpoint"],
          children=[
          LOD(forceTransitions=True,range=[0.04],
            children=[
            WorldInfo(info=["hide diamond when close"]),
            Shape(USE='HAnimSiteViewpointShape')])])]),
      HAnimSite(DEF='hanim_r_inclined_view',name='r_inclined_view',rotation=(-0.113,-0.993,0.0347,0.671),translation=(-1.62,1.05,2.06),
        #  HAnimSite visualization shape 
        children=[
        TouchSensor(description='HAnimSite r_inclined_view'),
        Shape(USE='HAnimSiteShape'),
        Viewpoint(DEF='hanim_r_inclined_viewpoint',centerOfRotation=(0,0.9,0),description='right inclined',position=(0,0,0)),
        #  HAnimSite/Viewpoint visualization shape 
        Anchor(description='HAnimSite hanim_r_inclined_view Viewpoint',url=["#hanim_r_inclined_viewpoint"],
          children=[
          LOD(forceTransitions=True,range=[0.04],
            children=[
            WorldInfo(info=["hide diamond when close"]),
            Shape(USE='HAnimSiteViewpointShape')])])]),
      HAnimSite(DEF='hanim_front_view',name='front_view',translation=(0,0.85,2.58),
        #  HAnimSite visualization shape 
        children=[
        TouchSensor(description='HAnimSite front_view'),
        Shape(USE='HAnimSiteShape'),
        Viewpoint(DEF='hanim_front_viewpoint',centerOfRotation=(0,0.9,0),description='front',position=(0,0,0)),
        #  HAnimSite/Viewpoint visualization shape 
        Anchor(description='HAnimSite hanim_front_view Viewpoint',url=["#hanim_front_viewpoint"],
          children=[
          LOD(forceTransitions=True,range=[0.04],
            children=[
            WorldInfo(info=["hide diamond when close"]),
            Shape(USE='HAnimSiteViewpointShape')])])]),
      HAnimSite(DEF='hanim_back_view',name='back_view',rotation=(0,1,0,3.14),translation=(0,0.85,-2.58),
        #  HAnimSite visualization shape 
        children=[
        TouchSensor(description='HAnimSite back_view'),
        Shape(USE='HAnimSiteShape'),
        Viewpoint(DEF='hanim_back_viewpoint',centerOfRotation=(0,0.9,0),description='back',position=(0,0,0)),
        #  HAnimSite/Viewpoint visualization shape 
        Anchor(description='HAnimSite hanim_back_view Viewpoint',url=["#hanim_back_viewpoint"],
          children=[
          LOD(forceTransitions=True,range=[0.04],
            children=[
            WorldInfo(info=["hide diamond when close"]),
            Shape(USE='HAnimSiteViewpointShape')])])]),
      HAnimSite(DEF='hanim_l_side_view',name='l_side_view',rotation=(0,1,0,1.5708),translation=(2.6,0.854,0),
        #  HAnimSite visualization shape 
        children=[
        TouchSensor(description='HAnimSite l_side_view'),
        Shape(USE='HAnimSiteShape'),
        Viewpoint(DEF='hanim_l_side_viewpoint',centerOfRotation=(0,0.9,0),description='left side',position=(0,0,0)),
        #  HAnimSite/Viewpoint visualization shape 
        Anchor(description='HAnimSite hanim_l_side_view Viewpoint',url=["#hanim_l_side_viewpoint"],
          children=[
          LOD(forceTransitions=True,range=[0.04],
            children=[
            WorldInfo(info=["hide diamond when close"]),
            Shape(USE='HAnimSiteViewpointShape')])])]),
      HAnimSite(DEF='hanim_Top_view',name='Top_view',rotation=(1,0,0,-1.57),translation=(0,3.5,0),
        #  HAnimSite visualization shape 
        children=[
        TouchSensor(description='HAnimSite Top_view'),
        Shape(USE='HAnimSiteShape'),
        Viewpoint(DEF='hanim_Top_viewpoint',centerOfRotation=(0,0.9,0),description='Top',position=(0,0,0)),
        #  HAnimSite/Viewpoint visualization shape 
        Anchor(description='HAnimSite hanim_Top_view Viewpoint',url=["#hanim_Top_viewpoint"],
          children=[
          LOD(forceTransitions=True,range=[0.04],
            children=[
            WorldInfo(info=["hide diamond when close"]),
            Shape(USE='HAnimSiteViewpointShape')])])]),
      HAnimSite(DEF='hanim_front_close_view',name='front_close_view',translation=(0,0.854,1.575),
        #  HAnimSite visualization shape 
        children=[
        TouchSensor(description='HAnimSite front_close_view'),
        Shape(USE='HAnimSiteShape'),
        Viewpoint(DEF='hanim_front_close_viewpoint',centerOfRotation=(0,0,1.575),description='front close',position=(0,0,0)),
        #  HAnimSite/Viewpoint visualization shape 
        Anchor(description='HAnimSite hanim_front_close_view Viewpoint',url=["#hanim_front_close_viewpoint"],
          children=[
          LOD(forceTransitions=True,range=[0.04],
            children=[
            WorldInfo(info=["hide diamond when close"]),
            Shape(USE='HAnimSiteViewpointShape')])])]),
      HAnimSite(DEF='hanim_side_close_view',name='side_close_view',rotation=(0,1,0,1.5708),translation=(1.56,0.854,0),
        #  HAnimSite visualization shape 
        children=[
        TouchSensor(description='HAnimSite side_close_view'),
        Shape(USE='HAnimSiteShape'),
        Viewpoint(DEF='hanim_side_close_viewpoint',centerOfRotation=(1.6,0,0),description='side close',position=(0,0,0)),
        #  HAnimSite/Viewpoint visualization shape 
        Anchor(description='HAnimSite hanim_side_close_view Viewpoint',url=["#hanim_side_close_viewpoint"],
          children=[
          LOD(forceTransitions=True,range=[0.04],
            children=[
            WorldInfo(info=["hide diamond when close"]),
            Shape(USE='HAnimSiteViewpointShape')])])]),
      HAnimSite(DEF='hanim_head_front_close_view',name='head_front_close_view',translation=(0,1.5,1),
        #  HAnimSite visualization shape 
        children=[
        TouchSensor(description='HAnimSite head_front_close_view'),
        Shape(USE='HAnimSiteShape'),
        Viewpoint(DEF='hanim_head_front_close_viewpoint',centerOfRotation=(0,0,1),description='head front close',position=(0,0,0)),
        #  HAnimSite/Viewpoint visualization shape 
        Anchor(description='HAnimSite hanim_head_front_close_view Viewpoint',url=["#hanim_head_front_close_viewpoint"],
          children=[
          LOD(forceTransitions=True,range=[0.04],
            children=[
            WorldInfo(info=["hide diamond when close"]),
            Shape(USE='HAnimSiteViewpointShape')])])]),
      HAnimSite(DEF='hanim_chest_front_close_view',name='chest_front_close_view',translation=(0,1.2,1),
        #  HAnimSite visualization shape 
        children=[
        TouchSensor(description='HAnimSite chest_front_close_view'),
        Shape(USE='HAnimSiteShape'),
        Viewpoint(DEF='hanim_chest_front_close_viewpoint',centerOfRotation=(0,0,1),description='chest front close',position=(0,0,0)),
        #  HAnimSite/Viewpoint visualization shape 
        Anchor(description='HAnimSite hanim_chest_front_close_view Viewpoint',url=["#hanim_chest_front_close_viewpoint"],
          children=[
          LOD(forceTransitions=True,range=[0.04],
            children=[
            WorldInfo(info=["hide diamond when close"]),
            Shape(USE='HAnimSiteViewpointShape')])])]),
      HAnimSite(DEF='hanim_pelvis_front_close_view',name='pelvis_front_close_view',translation=(0,0.8,1),
        #  HAnimSite visualization shape 
        children=[
        TouchSensor(description='HAnimSite pelvis_front_close_view'),
        Shape(USE='HAnimSiteShape'),
        Viewpoint(DEF='hanim_pelvis_front_close_viewpoint',centerOfRotation=(0,0,1),description='pelvis front close',position=(0,0,0)),
        #  HAnimSite/Viewpoint visualization shape 
        Anchor(description='HAnimSite hanim_pelvis_front_close_view Viewpoint',url=["#hanim_pelvis_front_close_viewpoint"],
          children=[
          LOD(forceTransitions=True,range=[0.04],
            children=[
            WorldInfo(info=["hide diamond when close"]),
            Shape(USE='HAnimSiteViewpointShape')])])]),
      HAnimSite(DEF='hanim_knees_front_close_view',name='knees_front_close_view',translation=(0,0.4,1),
        #  HAnimSite visualization shape 
        children=[
        TouchSensor(description='HAnimSite knees_front_close_view'),
        Shape(USE='HAnimSiteShape'),
        Viewpoint(DEF='hanim_knees_front_close_viewpoint',centerOfRotation=(0,0.4,0),description='knees front close',position=(0,0,0)),
        #  HAnimSite/Viewpoint visualization shape 
        Anchor(description='HAnimSite hanim_knees_front_close_view Viewpoint',url=["#hanim_knees_front_close_viewpoint"],
          children=[
          LOD(forceTransitions=True,range=[0.04],
            children=[
            WorldInfo(info=["hide diamond when close"]),
            Shape(USE='HAnimSiteViewpointShape')])])]),
      HAnimSite(DEF='hanim_feet_front_close_view',name='feet_front_close_view',translation=(0,0,1),
        #  HAnimSite visualization shape 
        children=[
        TouchSensor(description='HAnimSite feet_front_close_view'),
        Shape(USE='HAnimSiteShape'),
        Viewpoint(DEF='hanim_feet_front_close_viewpoint',description='feet front close',position=(0,0,0)),
        #  HAnimSite/Viewpoint visualization shape 
        Anchor(description='HAnimSite hanim_feet_front_close_view Viewpoint',url=["#hanim_feet_front_close_viewpoint"],
          children=[
          LOD(forceTransitions=True,range=[0.04],
            children=[
            WorldInfo(info=["hide diamond when close"]),
            Shape(USE='HAnimSiteViewpointShape')])])]),
      HAnimSite(DEF='hanim_eye_level_view',name='eye_level_view',translation=(0,1.6332,0.0502),
        #  HAnimSite visualization shape 
        children=[
        TouchSensor(description='HAnimSite eye_level_view'),
        Shape(USE='HAnimSiteShape'),
        Viewpoint(DEF='hanim_eye_level_viewpoint',description='eye level looking forward',orientation=(0,1,0,3.141593),position=(0,0,0)),
        #  HAnimSite/Viewpoint visualization shape 
        Anchor(description='HAnimSite hanim_eye_level_view Viewpoint',url=["#hanim_eye_level_viewpoint"],
          children=[
          LOD(forceTransitions=True,range=[0.04],
            children=[
            WorldInfo(info=["hide diamond when close"]),
            Shape(USE='HAnimSiteViewpointShape')])])]),
      HAnimSite(USE='hanim_l_eyeball_site_view'),
      HAnimSite(USE='hanim_r_eyeball_site_view'),
      HAnimSite(USE='hanim_l_hand_front_view'),
      HAnimSite(USE='hanim_r_hand_front_view')],
      #  original HAnimHumanoid info='"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman" "authorEmail=HAnim@web3D.org" "copyright=none" "creationDate=12 May 1999" "usageRestrictions=none" "humanoidVersion=2.0" "height=1.7504"' 
      #  Only one root HAnimJoint is allowed 
      #  original HAnimHumanoid info='"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman" "authorEmail=HAnim@web3D.org" "copyright=none" "creationDate=12 May 1999" "usageRestrictions=none" "humanoidVersion=2.0" "height=1.7504"' 
      #  Only one root HAnimJoint is allowed 
      #  USE nodes go here for access by inverse kinematics (IK) engines and other tools 
      #  Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation 
      #  original HAnimHumanoid info='"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman" "authorEmail=HAnim@web3D.org" "copyright=none" "creationDate=12 May 1999" "usageRestrictions=none" "humanoidVersion=2.0" "height=1.7504"' 
      #  Only one root HAnimJoint is expected 
      #  USE nodes go here for access by inverse kinematics (IK) engines and other tools 
      #  Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation 
      #  original HAnimHumanoid info='"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman" "authorEmail=HAnim@web3D.org" "copyright=none" "creationDate=12 May 1999" "usageRestrictions=none" "humanoidVersion=2.0" "height=1.7504"' 
      #  Only one root HAnimJoint is expected 
      #  USE nodes go here for access by inverse kinematics (IK) engines and other tools 
      #  Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation 
      #  original HAnimHumanoid info='"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman" "authorEmail=HAnim@web3D.org" "copyright=none" "creationDate=12 May 1999" "usageRestrictions=none" "humanoidVersion=2.0" "height=1.7504"' 
      #  Only one root HAnimJoint is expected 
      #  USE nodes go here for access by inverse kinematics (IK) engines and other tools 
      #  Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation 
      #  original HAnimHumanoid info='"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman" "authorEmail=HAnim@web3D.org" "copyright=none" "creationDate=12 May 1999" "usageRestrictions=none" "humanoidVersion=2.0" "height=1.7504"' 
      #  Only one root HAnimJoint is expected 
      #  USE nodes go here for access by inverse kinematics (IK) engines and other tools 
      #  Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation 
      #  original HAnimHumanoid info='"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman" "authorEmail=HAnim@web3D.org" "copyright=none" "creationDate=12 May 1999" "usageRestrictions=none" "humanoidVersion=2.0" "height=1.7504"' 
      #  Only one root HAnimJoint is expected 
      #  USE nodes go here for access by inverse kinematics (IK) engines and other tools 
      #  Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation 
      #  original HAnimHumanoid info='"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman" "authorEmail=HAnim@web3D.org" "copyright=none" "creationDate=12 May 1999" "usageRestrictions=none" "humanoidVersion=2.0" "height=1.7504"' 
      #  Only one root HAnimJoint is expected 
      #  USE nodes go here for access by inverse kinematics (IK) engines and other tools 
      #  Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation 
      #  TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default 
      #  original HAnimHumanoid info='"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman" "authorEmail=HAnim@web3D.org" "copyright=none" "creationDate=12 May 1999" "usageRestrictions=none" "humanoidVersion=2.0" "height=1.7504"' 
      #  Only one root HAnimJoint is expected 
      #  USE nodes go here for access by inverse kinematics (IK) engines and other tools 
      #  Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation 
      #  TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default 
      #  original HAnimHumanoid info='"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman" "authorEmail=HAnim@web3D.org" "copyright=none" "creationDate=12 May 1999" "usageRestrictions=none" "humanoidVersion=2.0" "height=1.7504"' 
      #  Only one root HAnimJoint is expected 
      #  USE nodes go here for access by inverse kinematics (IK) engines and other tools 
      #  Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation 
      #  TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default 
      #  original HAnimHumanoid info='"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman" "authorEmail=HAnim@web3D.org" "copyright=none" "creationDate=12 May 1999" "usageRestrictions=none" "humanoidVersion=2.0" "height=1.7504"' 
      #  Only one root HAnimJoint is expected 
      #  USE nodes go here for access by inverse kinematics (IK) engines and other tools 
      #  Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation 
      #  TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default 
      #  original HAnimHumanoid info='"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman" "authorEmail=HAnim@web3D.org" "copyright=none" "creationDate=12 May 1999" "usageRestrictions=none" "humanoidVersion=2.0" "height=1.7504"' 
      #  Only one root HAnimJoint is expected 
      #  USE nodes go here for access by inverse kinematics (IK) engines and other tools 
      #  Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation 
      #  TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default 
      #  original HAnimHumanoid info='"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman" "authorEmail=HAnim@web3D.org" "copyright=none" "creationDate=12 May 1999" "usageRestrictions=none" "humanoidVersion=2.0" "height=1.7504"' 
      #  Only one root HAnimJoint is expected 
      #  USE nodes go here for access by inverse kinematics (IK) engines and other tools 
      #  Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation 
      #  TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default 
      #  original HAnimHumanoid info='"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman" "authorEmail=HAnim@web3D.org" "copyright=none" "creationDate=12 May 1999" "usageRestrictions=none" "humanoidVersion=2.0" "height=1.7504"' 
      #  Only one root HAnimJoint is expected 
      #  USE nodes go here for access by inverse kinematics (IK) engines and other tools 
      #  Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation 
      #  TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default 
      #  original HAnimHumanoid info='"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman" "authorEmail=HAnim@web3D.org" "copyright=none" "creationDate=12 May 1999" "usageRestrictions=none" "humanoidVersion=2.0" "height=1.7504"' 
      #  Only one root HAnimJoint is expected 
      #  USE nodes go here for access by inverse kinematics (IK) engines and other tools 
      #  Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation 
      #  TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default 
      #  right between the eyes, stationary position not animating except with body itself 
      joints=[
      HAnimJoint(USE='hanim_humanoid_root',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_sacroiliac',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vl5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vl4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vl3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vl2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vl1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vt12',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vt11',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vt10',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vt9',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vt8',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vt7',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vt6',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vt5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vt4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vt3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vt2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vt1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vc7',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vc6',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vc5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vc4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vc3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vc2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vc1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_skullbase',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_temporomandibular',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_acromioclavicular',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_acromioclavicular',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_distal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpal_distal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_distal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpal_distal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_distal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpal_distal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_distal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpal_distal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_interphalangeal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpal_interphalangeal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_proximal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpal_proximal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_proximal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpal_proximal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_proximal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpal_proximal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_proximal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpal_proximal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpometacarpal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpometacarpal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpometacarpal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpometacarpal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpometacarpal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpometacarpal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpometacarpal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpometacarpal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpometacarpal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpometacarpal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_elbow',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_elbow',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_eyeball_joint',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_eyeball_joint',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_eyebrow_joint',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_eyebrow_joint',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_eyelid_joint',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_eyelid_joint',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_hip',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_hip',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_knee',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_knee',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metacarpophalangeal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_metacarpophalangeal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metacarpophalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_metacarpophalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metacarpophalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_metacarpophalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metacarpophalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_metacarpophalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metacarpophalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_metacarpophalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metatarsophalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_metatarsophalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_radiocarpal',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_radiocarpal',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_shoulder',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_shoulder',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_sternoclavicular',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_sternoclavicular',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_talocrural',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_talocrural',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsal_distal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_tarsal_distal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsometatarsal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_tarsometatarsal_2',ulimit=[0,0,0],llimit=[0,0,0])],
      segments=[
      HAnimSegment(USE='hanim_pelvis'),
      HAnimSegment(USE='hanim_skull'),
      HAnimSegment(USE='hanim_jaw'),
      HAnimSegment(USE='hanim_c1'),
      HAnimSegment(USE='hanim_c2'),
      HAnimSegment(USE='hanim_c3'),
      HAnimSegment(USE='hanim_c4'),
      HAnimSegment(USE='hanim_c5'),
      HAnimSegment(USE='hanim_c6'),
      HAnimSegment(USE='hanim_c7'),
      HAnimSegment(USE='hanim_t1'),
      HAnimSegment(USE='hanim_t2'),
      HAnimSegment(USE='hanim_t3'),
      HAnimSegment(USE='hanim_t4'),
      HAnimSegment(USE='hanim_t5'),
      HAnimSegment(USE='hanim_t6'),
      HAnimSegment(USE='hanim_t7'),
      HAnimSegment(USE='hanim_t8'),
      HAnimSegment(USE='hanim_t9'),
      HAnimSegment(USE='hanim_t10'),
      HAnimSegment(USE='hanim_t11'),
      HAnimSegment(USE='hanim_t12'),
      HAnimSegment(USE='hanim_l1'),
      HAnimSegment(USE='hanim_l2'),
      HAnimSegment(USE='hanim_l3'),
      HAnimSegment(USE='hanim_l4'),
      HAnimSegment(USE='hanim_l5'),
      HAnimSegment(USE='hanim_sacrum'),
      HAnimSegment(USE='hanim_l_calf'),
      HAnimSegment(USE='hanim_r_calf'),
      HAnimSegment(USE='hanim_l_carpal'),
      HAnimSegment(USE='hanim_r_carpal'),
      HAnimSegment(USE='hanim_l_carpal_distal_phalanx_1'),
      HAnimSegment(USE='hanim_r_carpal_distal_phalanx_1'),
      HAnimSegment(USE='hanim_l_carpal_distal_phalanx_2'),
      HAnimSegment(USE='hanim_r_carpal_distal_phalanx_2'),
      HAnimSegment(USE='hanim_l_carpal_distal_phalanx_3'),
      HAnimSegment(USE='hanim_r_carpal_distal_phalanx_3'),
      HAnimSegment(USE='hanim_l_carpal_distal_phalanx_4'),
      HAnimSegment(USE='hanim_r_carpal_distal_phalanx_4'),
      HAnimSegment(USE='hanim_l_carpal_distal_phalanx_5'),
      HAnimSegment(USE='hanim_r_carpal_distal_phalanx_5'),
      HAnimSegment(USE='hanim_l_carpal_middle_phalanx_2'),
      HAnimSegment(USE='hanim_r_carpal_middle_phalanx_2'),
      HAnimSegment(USE='hanim_l_carpal_middle_phalanx_3'),
      HAnimSegment(USE='hanim_r_carpal_middle_phalanx_3'),
      HAnimSegment(USE='hanim_l_carpal_middle_phalanx_4'),
      HAnimSegment(USE='hanim_r_carpal_middle_phalanx_4'),
      HAnimSegment(USE='hanim_l_carpal_middle_phalanx_5'),
      HAnimSegment(USE='hanim_r_carpal_middle_phalanx_5'),
      HAnimSegment(USE='hanim_l_carpal_proximal_phalanx_1'),
      HAnimSegment(USE='hanim_r_carpal_proximal_phalanx_1'),
      HAnimSegment(USE='hanim_l_carpal_proximal_phalanx_2'),
      HAnimSegment(USE='hanim_r_carpal_proximal_phalanx_2'),
      HAnimSegment(USE='hanim_l_carpal_proximal_phalanx_3'),
      HAnimSegment(USE='hanim_r_carpal_proximal_phalanx_3'),
      HAnimSegment(USE='hanim_l_carpal_proximal_phalanx_4'),
      HAnimSegment(USE='hanim_r_carpal_proximal_phalanx_4'),
      HAnimSegment(USE='hanim_l_carpal_proximal_phalanx_5'),
      HAnimSegment(USE='hanim_r_carpal_proximal_phalanx_5'),
      HAnimSegment(USE='hanim_l_clavicle'),
      HAnimSegment(USE='hanim_r_clavicle'),
      HAnimSegment(USE='hanim_l_eyeball'),
      HAnimSegment(USE='hanim_r_eyeball'),
      HAnimSegment(USE='hanim_l_eyebrow'),
      HAnimSegment(USE='hanim_r_eyebrow'),
      HAnimSegment(USE='hanim_l_eyelid'),
      HAnimSegment(USE='hanim_r_eyelid'),
      HAnimSegment(USE='hanim_l_forearm'),
      HAnimSegment(USE='hanim_r_forearm'),
      HAnimSegment(USE='hanim_l_metacarpal_1'),
      HAnimSegment(USE='hanim_r_metacarpal_1'),
      HAnimSegment(USE='hanim_l_metacarpal_2'),
      HAnimSegment(USE='hanim_r_metacarpal_2'),
      HAnimSegment(USE='hanim_l_metacarpal_3'),
      HAnimSegment(USE='hanim_r_metacarpal_3'),
      HAnimSegment(USE='hanim_l_metacarpal_4'),
      HAnimSegment(USE='hanim_r_metacarpal_4'),
      HAnimSegment(USE='hanim_l_metacarpal_5'),
      HAnimSegment(USE='hanim_r_metacarpal_5'),
      HAnimSegment(USE='hanim_l_metatarsal_2'),
      HAnimSegment(USE='hanim_r_metatarsal_2'),
      HAnimSegment(USE='hanim_l_scapula'),
      HAnimSegment(USE='hanim_r_scapula'),
      HAnimSegment(USE='hanim_l_talus'),
      HAnimSegment(USE='hanim_r_talus'),
      HAnimSegment(USE='hanim_l_tarsal_distal_phalanx_2'),
      HAnimSegment(USE='hanim_r_tarsal_distal_phalanx_2'),
      HAnimSegment(USE='hanim_l_tarsal_proximal_phalanx_2'),
      HAnimSegment(USE='hanim_r_tarsal_proximal_phalanx_2'),
      HAnimSegment(USE='hanim_l_thigh'),
      HAnimSegment(USE='hanim_r_thigh'),
      HAnimSegment(USE='hanim_l_upperarm'),
      HAnimSegment(USE='hanim_r_upperarm')],)])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for HAnim2SpecificationLOA3Illustrated.py:')
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

print("python HAnim2SpecificationLOA3Illustrated.py load and self-test diagnostics complete.")
