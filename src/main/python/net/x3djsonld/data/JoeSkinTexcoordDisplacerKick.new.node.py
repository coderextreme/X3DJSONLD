####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python JoeSkinTexcoordDisplacerKick.py
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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    component(name='HAnim',level=1),
    meta(content='JoeSkinTexcoordDisplacerKick.x3d',name='title'),
    meta(content='Joe No Reservations 20200709 spec root and vc7 hier 20161206 ... 20121221 ... 20040109 x3d/hanim',name='info'),
    meta(content='This Joe model is a V1 LOA3 Humanoid with textured skin composed mainly of V1 Site locations.',name='description'),
    meta(content='15 January 2004',name='created'),
    meta(content='12 January 2017',name='translated'),
    meta(content='27 January 2023',name='modified'),
    meta(content='Joe D Williams',name='creator'),
    meta(content='Roy Walmsley and Don Brutzman',name='translators'),
    meta(content='Transcoding from .vrml to .x3dv by Joe using BS studio circa 2012',name='info'),
    meta(content='translated from .x3dv to .xml for web3d archive',name='info'),
    meta(content='Record information relating a certain skin coordinate to a V1 Annex A Site name and location is now found in comment at end of this scene where each # number name string appears in the order of coordinate points in the skin mesh user code. Best organized to provide author data naming important HAnim humanoid skeletonspace to skinspace relations using structured MetadataSet containing MetadataString nodes',name='TODO'),
    meta(content='modified to correct root and vc7 hierarchies',name='info'),
    meta(content='https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/JoeSkinTexcoordDisplacerKick.x3d',name='identifier'),
    meta(content='BS studio translation from .x3dv by Joe using BS Contact',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(info=["X3D Humanoid V1 LOA3 skeleton","skin from hanim sites, surface features, and some added points","390 points"],title='X3D HANIM LOA3 Skeleton, 390 point Skin, texcoords, Displacer, teTrans for Joe_ by Joe'),
    NavigationInfo(DEF='Start_NavigationInfo',headlight=False,speed=2.5),
    Background(DEF='blue_Background'),
    SpotLight(DEF='light1',ambientIntensity=0.7,beamWidth=1.5,color=(0.8,0.8,1),cutOffAngle=0.6,direction=(0,0,0),location=(0,3,3),radius=10.0),
    PointLight(DEF='light2',ambientIntensity=0.7,color=(0.8,0.8,1),location=(0,10,-7)),
    #  External from the Humanoid viewpoints 
    Viewpoint(DEF='Scene_InclinedView',centerOfRotation=(0,0.85,0),description='Scene_Inclined View',orientation=(-0.113,0.993,0.0347,0.671),position=(1.62,1.05,3.06)),
    Viewpoint(DEF='Scene_FrontView',centerOfRotation=(0,0.8,0),description='Scene Front View',position=(0,0.8,2.58)),
    Viewpoint(DEF='Scene_SideView',centerOfRotation=(0,0.8,0),description='Scene Side View',orientation=(0,1,0,1.5708),position=(2.6,0.5,0)),
    Viewpoint(DEF='Scene_BackView',centerOfRotation=(0,1.5,0),description='Scene Back View',orientation=(0,1,0,3.14),position=(0,2.5,-3)),
    Viewpoint(DEF='Scene_TopView',centerOfRotation=(0,1.5,0),description='Scene Top View',orientation=(1,0,0,-1.5708),position=(0,3.5,0)),
    Group(DEF='Joe_Humanoid',
      children=[
      HAnimHumanoid(DEF='Joe_Human',name='Human',version='2.0',
        skeleton=[
        HAnimJoint(DEF='Joe_HumanoidRoot',name='HumanoidRoot',center=(0,0.875,0),llimit=[0,0,0],ulimit=[0,0,0],
          metadata=MetadataSet(name='warnings',reference='HAnim',
            #  TODO experimental 
            value=[
            MetadataString(name='SymmetricalLeftRight',reference='correction options: ignore, warn, average, left, right, largest, smallest',value=["ignore"])]),
          children=[
          HAnimSegment(DEF='Joe_sacrum',name='sacrum',
            children=[
            HAnimSite(DEF='Joe_RootFront_view',name='RootFront_view',
              children=[
              Transform(DEF='hanimcordsys',scale=(0.175,0.175,0.175),
                children=[
                Viewpoint(DEF='ViewBodyRootAxes',description='Joe_HAnim Root HAnimSite Coordinate Axes View'),
                Shape(DEF='AxisLinesShape',
                  #  RGB lines showing XYZ axes 
                  geometry=IndexedLineSet(colorIndex=[0,1,2],colorPerVertex=False,coordIndex=[0,1,-1,0,2,-1,0,3,-1],
                    color=Color(color=[(1,0,0),(0,0.6,0),(0,0,1)]),
                    coord=Coordinate(point=[(0,0,0),(1,0,0),(0,1,0),(0,0,1)])))])])]),
          HAnimJoint(DEF='Joe_sacroiliac',name='sacroiliac',center=(0,0.92,0),llimit=[0,0,0],skinCoordIndex=[17,19,20,21,22,23,26,27,73,82,89,91,93],skinCoordWeight=[1,1,1,1,1,1,1,1,1,1,0.35,0.35,1],ulimit=[0,0,0],
            children=[
            HAnimJoint(DEF='Joe_l_hip',name='l_hip',center=(0.1,0.92,0),llimit=[0,0,0],skinCoordIndex=[89,90,94,95,96,97],skinCoordWeight=[0.65,1,1,1,1,1],ulimit=[0,0,0],
              children=[
              HAnimJoint(DEF='Joe_l_knee',name='l_knee',center=(0.115,0.466,0),llimit=[0,0,0],skinCoordIndex=[334,335,336,337,338,339,340,341],skinCoordWeight=[1,1,1,1,1,1,1,1],ulimit=[0,0,0],
                children=[
                HAnimJoint(DEF='Joe_l_ankle',name='l_ankle',center=(0.115,0.069,0),llimit=[0,0,0],skinCoordIndex=[342,343,344,345],skinCoordWeight=[1,1,1,1],ulimit=[0,0,0],
                  children=[
                  HAnimJoint(DEF='Joe_l_subtalar',name='l_subtalar',center=(0.115,0.031,0.03),llimit=[0,0,0],skinCoordIndex=[346,347,348,71],skinCoordWeight=[1,1,1,1],ulimit=[0,0,0],
                    children=[
                    HAnimJoint(DEF='Joe_l_midtarsal',name='l_midtarsal',center=(0.115,0.037,0.09),llimit=[0,0,0],skinCoordIndex=[349,350,351,352],skinCoordWeight=[1,1,1,1],ulimit=[0,0,0],
                      children=[
                      HAnimJoint(DEF='Joe_l_metatarsal',name='l_metatarsal',center=(0.115,0.02,0.122),llimit=[0,0,0],skinCoordIndex=[353,354,355,356,357,358,359,360,361],skinCoordWeight=[1,1,1,1,1,1,1,1,1],ulimit=[0,0,0])])])])])]),
            HAnimJoint(DEF='Joe_r_hip',name='r_hip',center=(-0.1,0.92,0),llimit=[0,0,0],skinCoordIndex=[91,92,98,99,100,101,362,363],skinCoordWeight=[0.65,1,0.8,1,1,1,0.4,0.8],ulimit=[0,0,0],
              children=[
              HAnimJoint(DEF='Joe_r_knee',name='r_knee',center=(-0.05,0.466,0),llimit=[0,0,0],skinCoordIndex=[362,363,364,365,366,367,368,369,98],skinCoordWeight=[0.6,0.2,1,1,1,1,1,1,0.2],ulimit=[0,0,0],
                children=[
                HAnimJoint(DEF='Joe_r_ankle',name='r_ankle',center=(-0.115,0.069,0),llimit=[0,0,0],skinCoordIndex=[370,371,372,373],skinCoordWeight=[1,1,1,1],ulimit=[0,0,0],
                  children=[
                  HAnimJoint(DEF='Joe_r_subtalar',name='r_subtalar',center=(-0.1,0.015,-0.01),llimit=[0,0,0],skinCoordIndex=[374,375,376],skinCoordWeight=[1,1,1],ulimit=[0,0,0],
                    children=[
                    HAnimJoint(DEF='Joe_r_midtarsal',name='r_midtarsal',center=(-0.115,0.037,0.09),llimit=[0,0,0],skinCoordIndex=[377,378,379,380],skinCoordWeight=[1,1,1,1],ulimit=[0,0,0],
                      children=[
                      HAnimJoint(DEF='Joe_r_metatarsal',name='r_metatarsal',center=(-0.1,0.01,0.14),llimit=[0,0,0],skinCoordIndex=[381,382,383,384,385,386,387,388,389],skinCoordWeight=[1,1,1,1,1,1,1,1,1],ulimit=[0,0,0])])])])])])]),
          HAnimJoint(DEF='Joe_vl5',name='vl5',center=(0,1.045,-0.095),llimit=[0,0,0],skinCoordIndex=[28,76],skinCoordWeight=[1,1],ulimit=[0,0,0],
            children=[
            HAnimJoint(DEF='Joe_vl4',name='vl4',center=(0,1.068,-0.085),llimit=[0,0,0],ulimit=[0,0,0],
              children=[
              HAnimJoint(DEF='Joe_vl3',name='vl3',center=(0,1.092,-0.0725),llimit=[0,0,0],ulimit=[0,0,0],
                children=[
                HAnimJoint(DEF='Joe_vl2',name='vl2',center=(0,1.12,-0.065),llimit=[0,0,0],skinCoordIndex=[16,18,25,83,84,85,86,87,88],skinCoordWeight=[1,1,1,1,1,1,0.7,1,0.8],ulimit=[0,0,0],
                  children=[
                  HAnimJoint(DEF='Joe_vl1',name='vl1',center=(0,1.1459,-0.0625),llimit=[0,0,0],ulimit=[0,0,0],
                    children=[
                    HAnimJoint(DEF='Joe_vt12',name='vt12',center=(0,1.179,-0.068),llimit=[0,0,0],ulimit=[0,0,0],
                      children=[
                      HAnimJoint(DEF='Joe_vt11',name='vt11',center=(0,1.2679,-0.081),llimit=[0,0,0],ulimit=[0,0,0],
                        children=[
                        HAnimJoint(DEF='Joe_vt10',name='vt10',center=(0,1.242,-0.09),llimit=[0,0,0],skinCoordIndex=[15],skinCoordWeight=[1],ulimit=[0,0,0],
                          children=[
                          HAnimJoint(DEF='Joe_vt9',name='vt9',center=(0,1.268,-0.1),llimit=[0,0,0],skinCoordIndex=[13,14],skinCoordWeight=[1,1],ulimit=[0,0,0],
                            children=[
                            HAnimJoint(DEF='Joe_vt8',name='vt8',center=(0,1.294,-0.11),llimit=[0,0,0],ulimit=[0,0,0],
                              children=[
                              HAnimJoint(DEF='Joe_vt7',name='vt7',center=(0,1.323,-0.1155),llimit=[0,0,0],ulimit=[0,0,0],
                                children=[
                                HAnimJoint(DEF='Joe_vt6',name='vt6',center=(0,1.352,-0.12),llimit=[0,0,0],ulimit=[0,0,0],
                                  children=[
                                  HAnimJoint(DEF='Joe_vt5',name='vt5',center=(0,1.381,-0.1235),llimit=[0,0,0],ulimit=[0,0,0],
                                    children=[
                                    HAnimJoint(DEF='Joe_vt4',name='vt4',center=(0,1.41,-0.1235),llimit=[0,0,0],skinCoordIndex=[81],skinCoordWeight=[1],ulimit=[0,0,0],
                                      children=[
                                      HAnimJoint(DEF='Joe_vt3',name='vt3',center=(0,1.438,-0.12),llimit=[0,0,0],ulimit=[0,0,0],
                                        children=[
                                        HAnimJoint(DEF='Joe_vt2',name='vt2',center=(0,1.468,-0.105),llimit=[0,0,0],ulimit=[0,0,0],
                                          children=[
                                          HAnimJoint(DEF='Joe_vt1',name='vt1',center=(0,1.497,-0.09),llimit=[0,0,0],skinCoordIndex=[11,24],skinCoordWeight=[1,1],ulimit=[0,0,0],
                                            children=[
                                            HAnimJoint(DEF='Joe_vc7',name='vc7',center=(0,1.525,-0.072),llimit=[0,0,0],skinCoordIndex=[74,75],skinCoordWeight=[1,1],ulimit=[0,0,0],
                                              children=[
                                              HAnimJoint(DEF='Joe_vc6',name='vc6',center=(0,1.54,-0.05),llimit=[0,0,0],ulimit=[0,0,0],
                                                children=[
                                                HAnimJoint(DEF='Joe_vc5',name='vc5',center=(0,1.552,-0.035),llimit=[0,0,0],ulimit=[0,0,0],
                                                  children=[
                                                  HAnimJoint(DEF='Joe_vc4',name='vc4',center=(0,1.5675,-0.0256),llimit=[0,0,0],ulimit=[0,0,0],
                                                    children=[
                                                    HAnimJoint(DEF='Joe_vc3',name='vc3',center=(0,1.58225,-0.0185),llimit=[0,0,0],ulimit=[0,0,0],
                                                      children=[
                                                      HAnimJoint(DEF='Joe_vc2',name='vc2',center=(0,1.595,-0.0175),llimit=[0,0,0],ulimit=[0,0,0],
                                                        children=[
                                                        HAnimJoint(DEF='Joe_vc1',name='vc1',center=(0,1.61,-0.015),llimit=[0,0,0],ulimit=[0,0,0],
                                                          children=[
                                                          HAnimJoint(DEF='Joe_skullbase',name='skullbase',center=(0,1.63,-0.01),llimit=[0,0,0],skinCoordIndex=[0,1,2,3,4,5,6,7,8,9],skinCoordWeight=[1,1,1,1,1,1,1,1,1,1],ulimit=[0,0,0],
                                                            children=[
                                                            HAnimJoint(DEF='Joe_l_eyelid_joint',name='l_eyelid_joint',center=(0.034,1.659,0.06),llimit=[0,0,0],ulimit=[0,0,0]),
                                                            HAnimJoint(DEF='Joe_l_eyeball_joint',name='l_eyeball_joint',center=(0.034,1.659,0.06),llimit=[0,0,0],ulimit=[0,0,0]),
                                                            HAnimJoint(DEF='Joe_l_eyebrow_joint',name='l_eyebrow_joint',center=(0.034,1.659,0.06),llimit=[0,0,0],ulimit=[0,0,0]),
                                                            HAnimJoint(DEF='Joe_r_eyelid_joint',name='r_eyelid_joint',center=(-0.034,1.659,0.06),llimit=[0,0,0],ulimit=[0,0,0]),
                                                            HAnimJoint(DEF='Joe_r_eyeball_joint',name='r_eyeball_joint',center=(-0.034,1.659,0.06),llimit=[0,0,0],ulimit=[0,0,0]),
                                                            HAnimJoint(DEF='Joe_r_eyebrow_joint',name='r_eyebrow_joint',center=(-0.034,1.659,0.06),llimit=[0,0,0],ulimit=[0,0,0]),
                                                            HAnimJoint(DEF='Joe_temporomandibular',name='temporomandibular',center=(0.034,1.659,0.06),llimit=[0,0,0],ulimit=[0,0,0])],
                                                            displacers=[
                                                            HAnimDisplacer(DEF='Joe_skull_tip_raiser_action',name='skull_tip_raiser_action',coordIndex=[0,1,2,3,4,5,6,7,8,9],displacements=[(0,0.15,0),(0,0,0.15),(-0.1,0,0.15),(0.1,0,0.05),(0,-0.02,0.05),(-0.15,0,0),(-0.05,0,0),(0.15,0,0),(0.05,0,0),(0,0,-0.15)])])])])])])])])]),
                                            HAnimJoint(DEF='Joe_l_sternoclavicular',name='l_sternoclavicular',center=(0.082,1.4488,-0.0353),llimit=[0,0,0],skinCoordIndex=[12],skinCoordWeight=[1],ulimit=[0,0,0],
                                              children=[
                                              HAnimJoint(DEF='Joe_l_acromioclavicular',name='l_acromioclavicular',center=(0.0962,1.4269,-0.0424),llimit=[0,0,0],skinCoordIndex=[79],skinCoordWeight=[1],ulimit=[0,0,0],
                                                children=[
                                                HAnimJoint(DEF='Joe_l_shoulder',name='l_shoulder',center=(0.2,1.44,-0.04),llimit=[0,0,0],skinCoordIndex=[41,42,44,80,102,103,104,105],skinCoordWeight=[1,1,1,1,1,1,1,1],ulimit=[0,0,0],
                                                  children=[
                                                  HAnimJoint(DEF='Joe_l_elbow',name='l_elbow',center=(0.2,1.1388,-0.04),llimit=[0,0,0],skinCoordIndex=[45,46,47,109,110,111,112,113,115,116,117,118],skinCoordWeight=[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1],ulimit=[0,0,0],
                                                    children=[
                                                    HAnimJoint(DEF='Joe_l_wrist',name='l_wrist',center=(0.2,0.87,-0.04),llimit=[0,0,0],skinCoordIndex=[119,120,121,122,123,124,125,126],skinCoordWeight=[1,1,1,1,1,1,1,1],ulimit=[0,0,0],
                                                      children=[
                                                      HAnimJoint(DEF='Joe_l_thumb1',name='l_thumb1',center=(0.1924,0.8472,-0.0534),llimit=[0,0,0],skinCoordIndex=[127,128],skinCoordWeight=[1,1],ulimit=[0,0,0],
                                                        children=[
                                                        HAnimJoint(DEF='Joe_l_thumb2',name='l_thumb2',center=(0.1951,0.8226,0.0246),llimit=[0,0,0],skinCoordIndex=[138,139,140,141,142,143],skinCoordWeight=[0.5,0.5,0.5,1,1,1],ulimit=[0,0,0],
                                                          children=[
                                                          HAnimJoint(DEF='Joe_l_thumb3',name='l_thumb3',center=(0.1955,0.8159,0.0464),llimit=[0,0,0],skinCoordIndex=[144,145,146,147,148,149,150,151,152],skinCoordWeight=[1,1,1,1,1,1,1,1,1],ulimit=[0,0,0])])]),
                                                      HAnimJoint(DEF='Joe_l_index0',name='l_index0',center=(0.1983,0.8024,-0.028),llimit=[0,0,0],skinCoordIndex=[129,130],skinCoordWeight=[1,1],ulimit=[0,0,0],
                                                        children=[
                                                        HAnimJoint(DEF='Joe_l_index1',name='l_index1',center=(0.1983,0.7815,-0.028),llimit=[0,0,0],skinCoordIndex=[138,139,140,153,154,155,163],skinCoordWeight=[0.5,0.5,0.5,1,1,1,0.5],ulimit=[0,0,0],
                                                          children=[
                                                          HAnimJoint(DEF='Joe_l_index2',name='l_index2',center=(0.2017,0.7363,-0.0248),llimit=[0,0,0],skinCoordIndex=[166,167,168,169],skinCoordWeight=[1,1,1,1],ulimit=[0,0,0],
                                                            children=[
                                                            HAnimJoint(DEF='Joe_l_index3',name='l_index3',center=(0.2028,0.7139,-0.0236),llimit=[0,0,0],skinCoordIndex=[170,171,172,173,174,175,176,177,178],skinCoordWeight=[1,1,1,1,1,1,1,1,1],ulimit=[0,0,0])])])]),
                                                      HAnimJoint(DEF='Joe_l_middle0',name='l_middle0',center=(0.1987,0.8029,-0.053),llimit=[0,0,0],skinCoordIndex=[131,132],skinCoordWeight=[1,1],ulimit=[0,0,0],
                                                        children=[
                                                        HAnimJoint(DEF='Joe_l_middle1',name='l_middle1',center=(0.1987,0.7818,-0.053),llimit=[0,0,0],skinCoordIndex=[156,157,163,164],skinCoordWeight=[1,1,0.5,0.5],ulimit=[0,0,0],
                                                          children=[
                                                          HAnimJoint(DEF='Joe_l_middle2',name='l_middle2',center=(0.2013,0.7273,-0.0503),llimit=[0,0,0],skinCoordIndex=[179,180,181,182],skinCoordWeight=[1,1,1,1],ulimit=[0,0,0],
                                                            children=[
                                                            HAnimJoint(DEF='Joe_l_middle3',name='l_middle3',center=(0.2026,0.7011,-0.0494),llimit=[0,0,0],skinCoordIndex=[183,184,185,186,187,188,189,190,191],skinCoordWeight=[1,1,1,1,1,1,1,1,1],ulimit=[0,0,0])])])]),
                                                      HAnimJoint(DEF='Joe_l_ring0',name='l_ring0',center=(0.1956,0.8019,-0.0794),llimit=[0,0,0],skinCoordIndex=[133,134],skinCoordWeight=[1,1],ulimit=[0,0,0],
                                                        children=[
                                                        HAnimJoint(DEF='Joe_l_ring1',name='l_ring1',center=(0.1956,0.7815,-0.0794),llimit=[0,0,0],skinCoordIndex=[158,159,164,165],skinCoordWeight=[1,1,0.5,0.5],ulimit=[0,0,0],
                                                          children=[
                                                          HAnimJoint(DEF='Joe_l_ring2',name='l_ring2',center=(0.1973,0.7287,-0.0777),llimit=[0,0,0],skinCoordIndex=[192,193,194,195],skinCoordWeight=[1,1,1,1],ulimit=[0,0,0],
                                                            children=[
                                                            HAnimJoint(DEF='Joe_l_ring3',name='l_ring3',center=(0.1983,0.7045,-0.0767),llimit=[0,0,0],skinCoordIndex=[196,197,198,199,200,201,202,203,204],skinCoordWeight=[1,1,1,1,1,1,1,1,1],ulimit=[0,0,0])])])]),
                                                      HAnimJoint(DEF='Joe_l_pinky0',name='l_pinky0',center=(0.1925,0.8066,-0.1036),llimit=[0,0,0],skinCoordIndex=[135,136,137,165],skinCoordWeight=[1,1,1,0.5],ulimit=[0,0,0],
                                                        children=[
                                                        HAnimJoint(DEF='Joe_l_pinky1',name='l_pinky1',center=(0.1925,0.7866,-0.1036),llimit=[0,0,0],skinCoordIndex=[160,161,162],skinCoordWeight=[1,1,1],ulimit=[0,0,0],
                                                          children=[
                                                          HAnimJoint(DEF='Joe_l_pinky2',name='l_pinky2',center=(0.1938,0.7452,-0.1024),llimit=[0,0,0],skinCoordIndex=[205,206,207,208],skinCoordWeight=[1,1,1,1],ulimit=[0,0,0],
                                                            children=[
                                                            HAnimJoint(DEF='Joe_l_pinky3',name='l_pinky3',center=(0.1948,0.7277,-0.1017),llimit=[0,0,0],skinCoordIndex=[209,210,211,212,213,214,215,216,217],skinCoordWeight=[1,1,1,1,1,1,1,1,1],ulimit=[0,0,0])])])])])])])])]),
                                            HAnimJoint(DEF='Joe_r_sternoclavicular',name='r_sternoclavicular',center=(-0.03,1.46,0),llimit=[0,0,0],skinCoordIndex=[10],skinCoordWeight=[1],ulimit=[0,0,0],
                                              children=[
                                              HAnimJoint(DEF='Joe_r_acromioclavicular',name='r_acromioclavicular',center=(-0.09,1.41,-0.11),llimit=[0,0,0],skinCoordIndex=[77,29],skinCoordWeight=[1,0.9],ulimit=[0,0,0],
                                                children=[
                                                HAnimJoint(DEF='Joe_r_shoulder',name='r_shoulder',center=(-0.2,1.44,-0.04),llimit=[0,0,0],skinCoordIndex=[29,30,32,78,218,219,220,221,86,88],skinCoordWeight=[0.1,1,1,1,1,1,1,1,0.3,0.2],ulimit=[0,0,0],
                                                  children=[
                                                  HAnimJoint(DEF='Joe_r_elbow',name='r_elbow',center=(-0.2,1.1388,-0.04),llimit=[0,0,0],skinCoordIndex=[33,34,35,225,226,227,228,229,231,232,233,234],skinCoordWeight=[1,1,1,1,1,1,1,1,1,1,1,1],ulimit=[0,0,0],
                                                    children=[
                                                    HAnimJoint(DEF='Joe_r_wrist',name='r_wrist',center=(-0.2,0.89,-0.04),llimit=[0,0,0],skinCoordIndex=[235,236,237,238,239,240,241,242],skinCoordWeight=[1,1,1,1,1,1,1,1],ulimit=[0,0,0],
                                                      children=[
                                                      HAnimJoint(DEF='Joe_r_thumb1',name='r_thumb1',center=(-0.2,0.85,0),llimit=[0,0,0],skinCoordIndex=[243,244],skinCoordWeight=[1,1],ulimit=[0,0,0],
                                                        children=[
                                                        HAnimJoint(DEF='Joe_r_thumb2',name='r_thumb2',center=(-0.2,0.82,0.03),llimit=[0,0,0],skinCoordIndex=[254,255,256,257,258,259],skinCoordWeight=[0.5,0.5,0.5,1,1,1],ulimit=[0,0,0],
                                                          children=[
                                                          HAnimJoint(DEF='Joe_r_thumb3',name='r_thumb3',center=(-0.2,0.8,0.05),llimit=[0,0,0],skinCoordIndex=[260,261,262,263,264,265,266,267,268],skinCoordWeight=[1,1,1,1,1,1,1,1,1],ulimit=[0,0,0])])]),
                                                      HAnimJoint(DEF='Joe_r_index0',name='r_index0',center=(-0.2,0.84,-0.015),llimit=[0,0,0],skinCoordIndex=[245,246],skinCoordWeight=[1,1],ulimit=[0,0,0],
                                                        children=[
                                                        HAnimJoint(DEF='Joe_r_index1',name='r_index1',center=(-0.2,0.793,-0.015),llimit=[0,0,0],skinCoordIndex=[254,255,256,269,270,271,279],skinCoordWeight=[0.5,0.5,0.5,1,1,1,0.5],ulimit=[0,0,0],
                                                          children=[
                                                          HAnimJoint(DEF='Joe_r_index2',name='r_index2',center=(-0.2,0.745,-0.015),llimit=[0,0,0],skinCoordIndex=[282,283,284,285],skinCoordWeight=[1,1,1,1],ulimit=[0,0,0],
                                                            children=[
                                                            HAnimJoint(DEF='Joe_r_index3',name='r_index3',center=(-0.2,0.72,-0.015),llimit=[0,0,0],skinCoordIndex=[286,287,288,289,290,291,292,293,294],skinCoordWeight=[1,1,1,1,1,1,1,1,1],ulimit=[0,0,0])])])]),
                                                      HAnimJoint(DEF='Joe_r_middle0',name='r_middle0',center=(-0.2,0.835,-0.04),llimit=[0,0,0],skinCoordIndex=[247,248],skinCoordWeight=[1,1],ulimit=[0,0,0],
                                                        children=[
                                                        HAnimJoint(DEF='Joe_r_middle1',name='r_middle1',center=(-0.2,0.788,-0.04),llimit=[0,0,0],skinCoordIndex=[272,273,279,280],skinCoordWeight=[1,1,0.5,0.5],ulimit=[0,0,0],
                                                          children=[
                                                          HAnimJoint(DEF='Joe_r_middle2',name='r_middle2',center=(-0.2,0.74,-0.04),llimit=[0,0,0],skinCoordIndex=[295,296,297,298],skinCoordWeight=[1,1,1,1],ulimit=[0,0,0],
                                                            children=[
                                                            HAnimJoint(DEF='Joe_r_middle3',name='r_middle3',center=(-0.2,0.7142,-0.04),llimit=[0,0,0],skinCoordIndex=[299,300,301,302,303,304,305,306,307],skinCoordWeight=[1,1,1,1,1,1,1,1,1],ulimit=[0,0,0])])])]),
                                                      HAnimJoint(DEF='Joe_r_ring0',name='r_ring0',center=(-0.2,0.835,-0.065),llimit=[0,0,0],skinCoordIndex=[249,250],skinCoordWeight=[1,1],ulimit=[0,0,0],
                                                        children=[
                                                        HAnimJoint(DEF='Joe_r_ring1',name='r_ring1',center=(-0.2,0.793,-0.065),llimit=[0,0,0],skinCoordIndex=[274,275,280,281],skinCoordWeight=[1,1,0.5,0.5],ulimit=[0,0,0],
                                                          children=[
                                                          HAnimJoint(DEF='Joe_r_ring2',name='r_ring2',center=(-0.2,0.74,-0.065),llimit=[0,0,0],skinCoordIndex=[308,309,310,311],skinCoordWeight=[1,1,1,1],ulimit=[0,0,0],
                                                            children=[
                                                            HAnimJoint(DEF='Joe_r_ring3',name='r_ring3',center=(-0.2,0.7177,-0.065),llimit=[0,0,0],skinCoordIndex=[312,313,314,315,316,317,318,319,320],skinCoordWeight=[1,1,1,1,1,1,1,1,1],ulimit=[0,0,0])])])]),
                                                      HAnimJoint(DEF='Joe_r_pinky0',name='r_pinky0',center=(-0.2,0.84,-0.085),llimit=[0,0,0],skinCoordIndex=[251,252,253,281],skinCoordWeight=[1,1,1,0.5],ulimit=[0,0,0],
                                                        children=[
                                                        HAnimJoint(DEF='Joe_r_pinky1',name='r_pinky1',center=(-0.2,0.79,-0.085),llimit=[0,0,0],skinCoordIndex=[276,277,278],skinCoordWeight=[1,1,1],ulimit=[0,0,0],
                                                          children=[
                                                          HAnimJoint(DEF='Joe_r_pinky2',name='r_pinky2',center=(-0.2,0.755,-0.085),llimit=[0,0,0],skinCoordIndex=[321,322,323,324],skinCoordWeight=[1,1,1,1],ulimit=[0,0,0],
                                                            children=[
                                                            HAnimJoint(DEF='Joe_r_pinky3',name='r_pinky3',center=(-0.2,0.735,-0.09),llimit=[0,0,0],skinCoordIndex=[325,326,327,328,329,330,331,332,333],skinCoordWeight=[1,1,1,1,1,1,1,1,1],ulimit=[0,0,0])])])])])])])])])])])])])])])])])])])])])])])])])])]),],
        sites=[
        HAnimSite(USE='Joe_RootFront_view'),],
        skinCoord=Coordinate(USE='Joe_SkinCoord'),
        joints=[
        HAnimJoint(USE='Joe_HumanoidRoot',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_sacroiliac',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_vl5',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_vl4',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_vl3',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_vl2',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_vl1',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_vt12',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_vt11',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_vt10',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_vt9',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_vt8',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_vt7',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_vt6',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_vt5',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_vt4',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_vt3',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_vt2',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_vt1',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_vc7',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_vc6',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_vc5',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_vc4',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_vc3',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_vc2',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_vc1',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_skullbase',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_temporomandibular',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_l_acromioclavicular',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_r_acromioclavicular',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_l_ankle',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_r_ankle',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_l_elbow',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_r_elbow',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_l_eyeball_joint',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_r_eyeball_joint',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_l_eyebrow_joint',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_r_eyebrow_joint',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_l_eyelid_joint',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_r_eyelid_joint',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_l_hip',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_r_hip',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_l_index0',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_r_index0',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_l_index1',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_r_index1',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_l_index2',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_r_index2',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_l_index3',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_r_index3',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_l_knee',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_r_knee',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_l_metatarsal',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_r_metatarsal',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_l_middle0',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_r_middle0',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_l_middle1',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_r_middle1',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_l_middle2',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_r_middle2',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_l_middle3',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_r_middle3',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_l_midtarsal',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_r_midtarsal',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_l_pinky0',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_r_pinky0',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_l_pinky1',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_r_pinky1',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_l_pinky2',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_r_pinky2',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_l_pinky3',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_r_pinky3',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_l_ring0',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_r_ring0',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_l_ring1',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_r_ring1',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_l_ring2',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_r_ring2',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_l_ring3',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_r_ring3',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_l_shoulder',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_r_shoulder',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_l_sternoclavicular',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_r_sternoclavicular',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_l_subtalar',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_r_subtalar',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_l_thumb1',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_r_thumb1',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_l_thumb2',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_r_thumb2',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_l_thumb3',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_r_thumb3',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_l_wrist',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(USE='Joe_r_wrist',ulimit=[0,0,0],llimit=[0,0,0])],
        segments=[
        HAnimSegment(USE='Joe_sacrum'),],
        skin=[
        Shape(DEF='Joe_Shape',
          appearance=Appearance(DEF='Joe_skin_Appearance',
            material=Material(DEF='Joe_skin_Material',diffuseColor=(0.3,0.3,0.6),emissiveColor=(0.3,0.3,0.6)),
            texture=ImageTexture(DEF='JoeSkinImageTexture',url=["JoeBodyTexture29.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/JoeBodyTexture29.png"]),
            textureTransform=TextureTransform(DEF='KickTextureTransform')),
          geometry=IndexedFaceSet(DEF='Joe_skin_IndexedFaceSet',coordIndex=[0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1],creaseAngle=3.14,
            coord=Coordinate(DEF='Joe_SkinCoord',point=[(0,1.77,0),(0,1.665,0.09),(-0.033,1.62,0.087),(0.033,1.62,0.087),(0,1.55,0.097),(-0.077,1.64,-0.01),(-0.0527,1.58,0.015),(0.077,1.64,-0.01),(0.0527,1.58,0.015),(0,1.625,-0.0925),(-0.03,1.46,0.035),(0,1.44,0.03),(0.03,1.46,0.035),(-0.1135,1.318,0.095),(0.1135,1.318,0.095),(0,1.25,0.113),(-0.087,1.19,0.09),(-0.0935,1.03,0.075),(0.087,1.19,0.09),(0.0935,1.03,0.075),(-0.1425,1.065,0.0033),(-0.15,0.9,-0.01),(0.1425,1.065,0.0033),(0.15,0.9,-0.01),(0,1.53,-0.084),(0.0049,1.1908,-0.1113),(-0.0773,1.019,-0.12),(0.0773,1.019,-0.12),(0.005,1.0915,-0.1091),(-0.178,1.4825,-0.0625),(-0.17,1.38,0.007),(-0.1884,0.8676,-0.036),(-0.16,1.38,-0.127),(-0.2,1.1388,-0.08),(-0.244,1.1388,-0.04),(-0.165,1.1388,-0.04),(-0.23,1.133,-0.055),(-0.1977,0.8169,-0.0177),(-0.1941,0.6772,-0.0423),(-0.2117,0.8562,-0.0584),(-0.1929,0.789,-0.1064),(0.175,1.4825,-0.06),(0.17,1.38,0.007),(0.1901,0.8645,-0.0415),(0.16,1.38,-0.125),(0.2,1.1388,-0.08),(0.165,1.1388,-0.04),(0.244,1.1388,-0.04),(0.23,1.133,-0.055),(0.2009,0.8139,-0.0237),(0.2056,0.6743,-0.0482),(0.2142,0.8529,-0.0648),(0.1929,0.786,-0.1122),(-0.1,0.4913,-0.03),(-0.17,0.466,0),(-0.05,0.466,0),(-0.165,0.01,0.12),(-0.15,0.07,0),(-0.085,0.086,0.0125),(-0.09,0.056,0.0125),(-0.115,0.02,0.122),(-0.115,0.04,-0.055),(-0.11,0.011,0.19),(0.0993,0.4881,-0.0309),(0.17,0.466,0),(0.05,0.4867,0),(0.165,0.01,0.12),(0.15,0.07,0),(0.085,0.086,0.0125),(0.09,0.056,0.0125),(0.115,0.02,0.122),(0.115,0.04,-0.055),(0.11,0.011,0.19),(0,0.875,0),(-0.0646,1.5149,-0.038),(0.0646,1.5149,-0.038),(0,1.07225,0.09),(-0.11,1.427,-0.1375),(-0.235,1.42,-0.0625),(0.11,1.427,-0.1375),(0.235,1.42,-0.0625),(0,1.41,-0.145),(0,0.925,0.08),(-0.087,1.19,-0.09),(0.087,1.19,-0.09),(0.172,1.32,-0.03),(-0.172,1.32,-0.03),(0.15,1.23,-0.015),(-0.15,1.23,-0.015),(0.079,0.92,-0.14),(0.1,0.9,0.077),(-0.079,0.92,-0.14),(-0.1,0.9,0.075),(0,0.87,0),(0.171,0.65,0),(0.02,0.65,0),(0.1,0.65,-0.08),(0.1,0.65,0.07),(-0.171,0.65,0),(-0.02,0.65,0),(-0.1,0.65,-0.08),(-0.1,0.65,0.07),(0.25,1.27,-0.04),(0.17,1.27,-0.04),(0.2,1.27,-0.09),(0.2,1.27,0.02),(0.244,1.1388,-0.04),(0.165,1.1388,-0.04),(0.2,1.1388,-0.08),(0.2,1.1388,-0.013),(0.225,1,-0.01),(0.225,1,-0.07),(0.185,1,-0.01),(0.185,1,-0.07),(0.2,1.1388,-0.04),(0.225,0.92,-0.04),(0.175,0.92,-0.04),(0.2,0.92,-0.065),(0.2,0.92,-0.015),(0.225,0.89,-0.04),(0.175,0.89,-0.04),(0.2,0.89,-0.065),(0.2,0.89,-0.015),(0.218,0.86,-0.04),(0.184,0.86,-0.04),(0.2,0.87,-0.07),(0.2,0.87,0),(0.21,0.85,0),(0.1854,0.85,0),(0.212,0.84,-0.015),(0.183,0.84,-0.015),(0.213,0.835,-0.04),(0.19,0.835,-0.04),(0.211,0.835,-0.065),(0.192,0.835,-0.065),(0.208,0.84,-0.085),(0.19,0.84,-0.085),(0.2,0.84,-0.095),(0.215,0.82,0),(0.193,0.815,0.005),(0.198,0.8,0.012),(0.21,0.82,0.03),(0.19,0.82,0.03),(0.2,0.835,0.039),(0.212,0.8,0.05),(0.188,0.8,0.05),(0.2,0.807,0.057),(0.2,0.793,0.035),(0.2,0.774,0.076),(0.212,0.78,0.07),(0.188,0.78,0.07),(0.2,0.785,0.075),(0.2,0.77,0.062),(0.215,0.793,-0.015),(0.187,0.793,-0.015),(0.2,0.793,-0.005),(0.215,0.788,-0.04),(0.187,0.788,-0.04),(0.215,0.793,-0.065),(0.187,0.793,-0.065),(0.21,0.79,-0.085),(0.19,0.79,-0.085),(0.2,0.79,-0.095),(0.19,0.77,-0.0275),(0.19,0.77,-0.0525),(0.19,0.78,-0.0775),(0.212,0.745,-0.015),(0.188,0.745,-0.02),(0.2,0.745,-0.0255),(0.2,0.745,-0.0045),(0.211,0.72,-0.015),(0.189,0.72,-0.015),(0.2,0.72,-0.0252),(0.2,0.72,-0.0048),(0.21,0.695,-0.015),(0.19,0.695,-0.015),(0.2,0.695,-0.025),(0.2,0.695,-0.005),(0.2,0.685,-0.015),(0.215,0.74,-0.04),(0.185,0.74,-0.04),(0.2,0.74,-0.055),(0.2,0.74,-0.025),(0.21,0.7142,-0.04),(0.19,0.7142,-0.04),(0.2,0.7142,-0.053),(0.2,0.7142,-0.027),(0.21,0.68,-0.04),(0.19,0.68,-0.04),(0.2,0.68,-0.05),(0.2,0.68,-0.03),(0.2,0.67,-0.04),(0.212,0.74,-0.065),(0.188,0.74,-0.065),(0.2,0.74,-0.0756),(0.2,0.74,-0.0542),(0.21,0.7177,-0.065),(0.19,0.7177,-0.065),(0.2,0.7177,-0.0751),(0.2,0.7177,-0.0549),(0.21,0.695,-0.065),(0.19,0.695,-0.065),(0.2,0.695,-0.075),(0.2,0.695,-0.055),(0.2,0.685,-0.065),(0.211,0.755,-0.085),(0.189,0.755,-0.085),(0.2,0.755,-0.0952),(0.2,0.755,-0.0748),(0.21,0.735,-0.085),(0.19,0.735,-0.085),(0.2,0.735,-0.0951),(0.2,0.735,-0.0749),(0.21,0.72,-0.085),(0.19,0.72,-0.085),(0.2,0.72,-0.095),(0.2,0.72,-0.075),(0.2,0.71,-0.085),(-0.23,1.23,-0.04),(-0.16,1.23,-0.04),(-0.2,1.235,-0.105),(-0.2,1.255,0.02),(-0.244,1.1388,-0.04),(-0.165,1.1388,-0.04),(-0.2,1.1388,-0.08),(-0.2,1.1388,0.013),(-0.225,1,-0.01),(-0.225,1,-0.07),(-0.185,1,-0.01),(-0.185,1,-0.07),(-0.2,1.1388,-0.04),(-0.225,0.92,-0.04),(-0.175,0.92,-0.04),(-0.2,0.92,-0.065),(-0.2,0.92,-0.015),(-0.225,0.89,-0.04),(-0.175,0.89,-0.04),(-0.2,0.89,-0.065),(-0.2,0.89,-0.015),(-0.218,0.86,-0.04),(-0.184,0.86,-0.04),(-0.2,0.87,-0.07),(-0.2,0.87,0),(-0.21,0.85,0),(-0.1854,0.85,0),(-0.212,0.84,-0.015),(-0.183,0.84,-0.015),(-0.213,0.835,-0.04),(-0.19,0.835,-0.04),(-0.211,0.835,-0.065),(-0.192,0.835,-0.065),(-0.208,0.84,-0.085),(-0.19,0.84,-0.085),(-0.2,0.84,-0.095),(-0.215,0.82,0),(-0.193,0.815,0.005),(-0.198,0.8,0.012),(-0.21,0.82,0.03),(-0.19,0.82,0.03),(-0.2,0.835,0.039),(-0.212,0.8,0.05),(-0.188,0.8,0.05),(-0.2,0.807,0.057),(-0.2,0.793,0.035),(-0.2,0.774,0.076),(-0.212,0.78,0.07),(-0.188,0.78,0.07),(-0.2,0.785,0.075),(-0.2,0.77,0.062),(-0.215,0.793,-0.015),(-0.187,0.793,-0.015),(-0.2,0.793,-0.005),(-0.215,0.788,-0.04),(-0.187,0.788,-0.04),(-0.215,0.793,-0.065),(-0.187,0.793,-0.065),(-0.21,0.79,-0.085),(-0.19,0.79,-0.085),(-0.2,0.79,-0.095),(-0.19,0.77,-0.0275),(-0.19,0.77,-0.0525),(-0.19,0.78,-0.0775),(-0.212,0.745,-0.015),(-0.188,0.745,-0.02),(-0.2,0.745,-0.0255),(-0.2,0.745,-0.0045),(-0.211,0.72,-0.015),(-0.189,0.72,-0.015),(-0.2,0.72,-0.0252),(-0.2,0.72,-0.0048),(-0.21,0.695,-0.015),(-0.19,0.695,-0.015),(-0.2,0.695,-0.025),(-0.2,0.695,-0.005),(-0.2,0.685,-0.015),(-0.215,0.74,-0.04),(-0.185,0.74,-0.04),(-0.2,0.74,-0.055),(-0.2,0.74,-0.025),(-0.21,0.7142,-0.04),(-0.19,0.7142,-0.04),(-0.2,0.7142,-0.053),(-0.2,0.7142,-0.027),(-0.21,0.68,-0.04),(-0.19,0.68,-0.04),(-0.2,0.68,-0.05),(-0.2,0.68,-0.03),(-0.2,0.67,-0.04),(-0.212,0.74,-0.065),(-0.188,0.74,-0.065),(-0.2,0.74,-0.0756),(-0.2,0.74,-0.0542),(-0.21,0.7177,-0.065),(-0.19,0.7177,-0.065),(-0.2,0.7177,-0.0751),(-0.2,0.7177,-0.0549),(-0.21,0.695,-0.065),(-0.19,0.695,-0.065),(-0.2,0.695,-0.075),(-0.2,0.695,-0.055),(-0.2,0.685,-0.065),(-0.211,0.755,-0.085),(-0.189,0.755,-0.085),(-0.2,0.755,-0.0952),(-0.2,0.755,-0.0748),(-0.21,0.735,-0.085),(-0.19,0.735,-0.085),(-0.2,0.735,-0.0951),(-0.2,0.735,-0.0749),(-0.21,0.72,-0.085),(-0.19,0.72,-0.085),(-0.2,0.72,-0.095),(-0.2,0.72,-0.075),(-0.2,0.71,-0.085),(0.115,0.466,0.06),(0.115,0.466,-0.055),(0.15,0.466,0),(0.05,0.466,0),(0.17,0.3,0),(0.06,0.3,0),(0.1,0.3,-0.05),(0.1,0.3,0.05),(0.15,0.07,0),(0.085,0.086,0.0125),(0.115,0.069,-0.045),(0.117,0.0975,0.0615),(0.1375,0.006,-0.03),(0.095,0.006,-0.03),(0.115,0.015,-0.045),(0.115,0.06,0.1),(0.115,0,0.07),(0.165,0,0.07),(0.095,0,0.07),(0.115,0.04,0.13),(0.125,0,0.12),(0.165,0,0.12),(0.087,0,0.122),(0.09,0.012,0.188),(0.11,0.011,0.19),(0.128,0.011,0.185),(0.142,0.011,0.178),(0.154,0.01,0.168),(-0.115,0.466,0.06),(-0.115,0.466,-0.055),(-0.17,0.466,0),(-0.05,0.466,0),(-0.17,0.3,0),(-0.06,0.3,0),(-0.1,0.3,-0.05),(-0.1,0.3,0.05),(-0.15,0.07,0),(-0.085,0.086,0.0125),(-0.115,0.069,-0.045),(-0.117,0.0975,0.0615),(-0.1375,0.006,-0.03),(-0.095,0.006,-0.03),(-0.095,0.006,-0.03),(-0.115,0.06,0.1),(-0.115,0,0.07),(-0.165,0,0.07),(-0.095,0,0.07),(-0.115,0.04,0.13),(-0.125,0,0.12),(-0.165,0,0.12),(-0.087,0,0.122),(-0.09,0.012,0.188),(-0.11,0.011,0.19),(-0.128,0.011,0.185),(-0.142,0.011,0.178),(-0.154,0.01,0.168)]),
            texCoord=TextureCoordinate(point=[(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5),(0.5,0),(0,0.5),(0,0),(0.5,0.5)])))],)]),
    Group(
      children=[
      TimeSensor(DEF='KickTimer',cycleInterval=3.73,loop=True),
      #  Interpolators 
      OrientationInterpolator(DEF='HumanoidRoot_RotationInterpolator',key=[0,0.1,0.4,0.6,1],keyValue=[(1,0,0,0.5),(1,0,0,0.5),(-1,0,0,0.1),(-1,0,0,0.5),(-1,0,0,0.5)]),
      PositionInterpolator(DEF='HumanoidRoot_TranslationInterpolator',key=[0,0.2,0.6,1],keyValue=[(1,0.3,-1),(0.4,-0.04,-0.4),(-0.18,0.1,0),(-0.2,0.15,0.15)]),
      OrientationInterpolator(DEF='sacroiliac_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='l_hip_RotationInterpolator',key=[0,0.1,0.3,0.45,1],keyValue=[(-1,0,0,1.5),(-1,0,0,1),(0,0,1,0),(1,0,0,0.5),(1,0,0,1)]),
      OrientationInterpolator(DEF='l_knee_RotationInterpolator',key=[0,0.2,0.35,0.5,1],keyValue=[(1,0,0,1),(0,0,1,0),(0,0,1,0.2),(1,0,1,0.5),(1,0,0,1.4)]),
      OrientationInterpolator(DEF='l_ankle_RotationInterpolator',key=[0,0.25,1],keyValue=[(-1,0,0,1),(0,0,1,0),(1,0,0,1)]),
      OrientationInterpolator(DEF='l_subtalar_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='l_midtarsal_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='l_metatarsal_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='r_hip_RotationInterpolator',key=[0,0.25,0.5,0.75,1],keyValue=[(1,0,0,1),(1,0,0,1),(-1,0,0,1),(-1,0,0,1),(-1,0,0,1)]),
      OrientationInterpolator(DEF='r_knee_RotationInterpolator',key=[0,0.25,0.5,0.75,1],keyValue=[(1,0,0,0.1),(0,0,1,0),(1,0,0,1),(1,0,0,1),(1,0,0,1.5)]),
      OrientationInterpolator(DEF='r_ankle_RotationInterpolator',key=[0,0.25,0.5,0.75,1],keyValue=[(-1,0,0,1),(0,0,1,0),(1,0,0,1),(1,0,0,1),(1,0,0,0.5)]),
      OrientationInterpolator(DEF='r_subtalar_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='r_midtarsal_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='r_metatarsal_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='vl5_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='vl4_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='vl3_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='vl2_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='vl1_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='vt12_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='vt11_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='vt10_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='vt9_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='vt8_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='vt7_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='vt6_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='vt5_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='vt4_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='vt3_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='vt2_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='vt1_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='vc7_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='vc6_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='vc5_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='vc4_RotationInterpolator',key=[0,0.3,0.4,1],keyValue=[(1,0,1,0.25),(-1,0,-1,0.35),(1,0,0,0.75),(1,0,1,0.5)]),
      OrientationInterpolator(DEF='vc3_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='vc2_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='vc1_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='skullbase_RotationInterpolator',key=[0,0.2,0.75,1],keyValue=[(0,-1,0,0.5),(0,0,1,0),(0,0,1,0),(0,1,0,0.35)]),
      OrientationInterpolator(DEF='l_eyelid_joint_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='l_eyeball_joint_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='l_eyebrow_joint_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='r_eyelid_joint_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='r_eyeball_joint_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='r_eyebrow_joint_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='temporomandibular_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='l_sternoclavicular_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='l_acromioclavicular_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='l_shoulder_RotationInterpolator',key=[0,0.4,1],keyValue=[(0,0,1,0),(0,0,1,1.5),(-1,0,1,1.75)]),
      OrientationInterpolator(DEF='l_elbow_RotationInterpolator',key=[0,0.5,1],keyValue=[(-1,0,0,3),(-1,0,0,0.75),(-1,-1,0,0.5)]),
      OrientationInterpolator(DEF='l_wrist_RotationInterpolator',key=[0,0.4,0.8,1],keyValue=[(0,0,1,0),(0,1,0,1.3),(0,-0.5,1,1.3),(0,0,1,0)]),
      OrientationInterpolator(DEF='l_thumb1_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='l_thumb2_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='l_thumb3_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='l_index0_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='l_index1_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='l_index2_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='l_index3_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='l_middle0_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='l_middle1_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='l_middle2_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='l_middle3_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='l_ring0_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='l_ring1_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='l_ring2_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='l_ring3_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='l_pinky0_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='l_pinky1_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='l_pinky2_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='l_pinky3_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='r_sternoclavicular_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='r_acromioclavicular_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='r_shoulder_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,-1,2.5),(0,0,-1,1.5),(0,0,-1,1.75)]),
      OrientationInterpolator(DEF='r_elbow_RotationInterpolator',key=[0,0.5,1],keyValue=[(-1,0,0,3),(-1,0,0,0.75),(-1,-1,0,0.5)]),
      OrientationInterpolator(DEF='r_wrist_RotationInterpolator',key=[0,0.5,0.7,1],keyValue=[(0,1,0,0.3),(0,0,1,0),(0,0,-1,1),(0,-1,0,0.3)]),
      OrientationInterpolator(DEF='r_thumb1_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='r_thumb2_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='r_thumb3_RotationInterpolator',key=[0,0.5,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0)]),
      OrientationInterpolator(DEF='r_index0_RotationInterpolator',key=[0,0.5,0.75,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,1),(0,0,1,0)]),
      OrientationInterpolator(DEF='r_index1_RotationInterpolator',key=[0,0.5,0.75,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,1.5),(0,0,1,0)]),
      OrientationInterpolator(DEF='r_index2_RotationInterpolator',key=[0,0.5,0.75,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,1.5),(0,0,1,0)]),
      OrientationInterpolator(DEF='r_index3_RotationInterpolator',key=[0,0.5,0.75,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,1.5),(0,0,1,0)]),
      OrientationInterpolator(DEF='r_middle0_RotationInterpolator',key=[0,0.5,0.75,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,1),(0,0,1,0)]),
      OrientationInterpolator(DEF='r_middle1_RotationInterpolator',key=[0,0.5,0.75,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,1.5),(0,0,1,0)]),
      OrientationInterpolator(DEF='r_middle2_RotationInterpolator',key=[0,0.5,0.75,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,1.5),(0,0,1,0)]),
      OrientationInterpolator(DEF='r_middle3_RotationInterpolator',key=[0,0.5,0.75,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,1.5),(0,0,1,0)]),
      OrientationInterpolator(DEF='r_ring0_RotationInterpolator',key=[0,0.5,0.75,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,1),(0,0,1,0)]),
      OrientationInterpolator(DEF='r_ring1_RotationInterpolator',key=[0,0.5,0.75,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,1.5),(0,0,1,0)]),
      OrientationInterpolator(DEF='r_ring2_RotationInterpolator',key=[0,0.5,0.75,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,1.5),(0,0,1,0)]),
      OrientationInterpolator(DEF='r_ring3_RotationInterpolator',key=[0,0.5,0.75,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,1.5),(0,0,1,0)]),
      OrientationInterpolator(DEF='r_pinky0_RotationInterpolator',key=[0,0.5,0.75,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,1),(0,0,1,0)]),
      OrientationInterpolator(DEF='r_pinky1_RotationInterpolator',key=[0,0.5,0.75,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,1.5),(0,0,1,0)]),
      OrientationInterpolator(DEF='r_pinky2_RotationInterpolator',key=[0,0.5,0.75,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,1.5),(0,0,1,0)]),
      OrientationInterpolator(DEF='r_pinky3_RotationInterpolator',key=[0,0.5,0.75,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,1.5),(0,0,1,0)])]),
    #  TimeSensor to Interpolators 
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='HumanoidRoot_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='HumanoidRoot_TranslationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='sacroiliac_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='l_hip_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='l_knee_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='l_ankle_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='l_subtalar_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='l_midtarsal_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='l_metatarsal_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='r_hip_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='r_knee_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='r_ankle_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='r_subtalar_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='r_midtarsal_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='r_metatarsal_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='vl5_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='vl4_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='vl3_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='vl2_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='vl1_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='vt12_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='vt11_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='vt10_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='vt9_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='vt8_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='vt7_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='vt6_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='vt5_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='vt4_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='vt3_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='vt2_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='vt1_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='vc7_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='vc6_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='vc5_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='vc4_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='vc3_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='vc2_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='vc1_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='skullbase_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='l_eyelid_joint_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='l_eyeball_joint_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='l_eyebrow_joint_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='r_eyelid_joint_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='r_eyeball_joint_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='r_eyebrow_joint_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='temporomandibular_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='l_sternoclavicular_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='l_acromioclavicular_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='l_shoulder_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='l_elbow_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='l_wrist_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='l_thumb1_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='l_thumb2_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='l_thumb3_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='l_index0_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='l_index1_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='l_index2_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='l_index3_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='l_middle0_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='l_middle1_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='l_middle2_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='l_middle3_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='l_ring0_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='l_ring1_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='l_ring2_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='l_ring3_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='l_pinky0_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='l_pinky1_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='l_pinky2_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='l_pinky3_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='r_sternoclavicular_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='r_acromioclavicular_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='r_shoulder_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='r_elbow_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='r_wrist_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='r_thumb1_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='r_thumb2_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='r_thumb3_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='r_index0_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='r_index1_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='r_index2_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='r_index3_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='r_middle0_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='r_middle1_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='r_middle2_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='r_middle3_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='r_ring0_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='r_ring1_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='r_ring2_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='r_ring3_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='r_pinky0_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='r_pinky1_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='r_pinky2_RotationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='r_pinky3_RotationInterpolator'),
    #  Routes from Interpolators to Joe_ model Joints 
    ROUTE(fromField='value_changed',fromNode='HumanoidRoot_RotationInterpolator',toField='set_rotation',toNode='Joe_HumanoidRoot'),
    ROUTE(fromField='value_changed',fromNode='HumanoidRoot_TranslationInterpolator',toField='set_translation',toNode='Joe_HumanoidRoot'),
    ROUTE(fromField='value_changed',fromNode='sacroiliac_RotationInterpolator',toField='set_rotation',toNode='Joe_sacroiliac'),
    ROUTE(fromField='value_changed',fromNode='l_hip_RotationInterpolator',toField='set_rotation',toNode='Joe_l_hip'),
    ROUTE(fromField='value_changed',fromNode='l_knee_RotationInterpolator',toField='set_rotation',toNode='Joe_l_knee'),
    ROUTE(fromField='value_changed',fromNode='l_ankle_RotationInterpolator',toField='set_rotation',toNode='Joe_l_ankle'),
    ROUTE(fromField='value_changed',fromNode='l_subtalar_RotationInterpolator',toField='set_rotation',toNode='Joe_l_subtalar'),
    ROUTE(fromField='value_changed',fromNode='l_midtarsal_RotationInterpolator',toField='set_rotation',toNode='Joe_l_midtarsal'),
    ROUTE(fromField='value_changed',fromNode='l_metatarsal_RotationInterpolator',toField='set_rotation',toNode='Joe_l_metatarsal'),
    ROUTE(fromField='value_changed',fromNode='r_hip_RotationInterpolator',toField='set_rotation',toNode='Joe_r_hip'),
    ROUTE(fromField='value_changed',fromNode='r_knee_RotationInterpolator',toField='set_rotation',toNode='Joe_r_knee'),
    ROUTE(fromField='value_changed',fromNode='r_ankle_RotationInterpolator',toField='set_rotation',toNode='Joe_r_ankle'),
    ROUTE(fromField='value_changed',fromNode='r_subtalar_RotationInterpolator',toField='set_rotation',toNode='Joe_r_subtalar'),
    ROUTE(fromField='value_changed',fromNode='r_midtarsal_RotationInterpolator',toField='set_rotation',toNode='Joe_r_midtarsal'),
    ROUTE(fromField='value_changed',fromNode='r_metatarsal_RotationInterpolator',toField='set_rotation',toNode='Joe_r_metatarsal'),
    ROUTE(fromField='value_changed',fromNode='vl5_RotationInterpolator',toField='set_rotation',toNode='Joe_vl5'),
    ROUTE(fromField='value_changed',fromNode='vl4_RotationInterpolator',toField='set_rotation',toNode='Joe_vl4'),
    ROUTE(fromField='value_changed',fromNode='vl3_RotationInterpolator',toField='set_rotation',toNode='Joe_vl3'),
    ROUTE(fromField='value_changed',fromNode='vl2_RotationInterpolator',toField='set_rotation',toNode='Joe_vl2'),
    ROUTE(fromField='value_changed',fromNode='vl1_RotationInterpolator',toField='set_rotation',toNode='Joe_vl1'),
    ROUTE(fromField='value_changed',fromNode='vt12_RotationInterpolator',toField='set_rotation',toNode='Joe_vt12'),
    ROUTE(fromField='value_changed',fromNode='vt11_RotationInterpolator',toField='set_rotation',toNode='Joe_vt11'),
    ROUTE(fromField='value_changed',fromNode='vt10_RotationInterpolator',toField='set_rotation',toNode='Joe_vt10'),
    ROUTE(fromField='value_changed',fromNode='vt9_RotationInterpolator',toField='set_rotation',toNode='Joe_vt9'),
    ROUTE(fromField='value_changed',fromNode='vt8_RotationInterpolator',toField='set_rotation',toNode='Joe_vt8'),
    ROUTE(fromField='value_changed',fromNode='vt7_RotationInterpolator',toField='set_rotation',toNode='Joe_vt7'),
    ROUTE(fromField='value_changed',fromNode='vt6_RotationInterpolator',toField='set_rotation',toNode='Joe_vt6'),
    ROUTE(fromField='value_changed',fromNode='vt5_RotationInterpolator',toField='set_rotation',toNode='Joe_vt5'),
    ROUTE(fromField='value_changed',fromNode='vt4_RotationInterpolator',toField='set_rotation',toNode='Joe_vt4'),
    ROUTE(fromField='value_changed',fromNode='vt3_RotationInterpolator',toField='set_rotation',toNode='Joe_vt3'),
    ROUTE(fromField='value_changed',fromNode='vt2_RotationInterpolator',toField='set_rotation',toNode='Joe_vt2'),
    ROUTE(fromField='value_changed',fromNode='vt1_RotationInterpolator',toField='set_rotation',toNode='Joe_vt1'),
    ROUTE(fromField='value_changed',fromNode='vc7_RotationInterpolator',toField='set_rotation',toNode='Joe_vc7'),
    ROUTE(fromField='value_changed',fromNode='vc6_RotationInterpolator',toField='set_rotation',toNode='Joe_vc6'),
    ROUTE(fromField='value_changed',fromNode='vc5_RotationInterpolator',toField='set_rotation',toNode='Joe_vc5'),
    ROUTE(fromField='value_changed',fromNode='vc4_RotationInterpolator',toField='set_rotation',toNode='Joe_vc4'),
    ROUTE(fromField='value_changed',fromNode='vc3_RotationInterpolator',toField='set_rotation',toNode='Joe_vc3'),
    ROUTE(fromField='value_changed',fromNode='vc2_RotationInterpolator',toField='set_rotation',toNode='Joe_vc2'),
    ROUTE(fromField='value_changed',fromNode='vc1_RotationInterpolator',toField='set_rotation',toNode='Joe_vc1'),
    ROUTE(fromField='value_changed',fromNode='skullbase_RotationInterpolator',toField='set_rotation',toNode='Joe_skullbase'),
    ROUTE(fromField='value_changed',fromNode='l_eyelid_joint_RotationInterpolator',toField='set_rotation',toNode='Joe_l_eyelid_joint'),
    ROUTE(fromField='value_changed',fromNode='l_eyeball_joint_RotationInterpolator',toField='set_rotation',toNode='Joe_l_eyeball_joint'),
    ROUTE(fromField='value_changed',fromNode='l_eyebrow_joint_RotationInterpolator',toField='set_rotation',toNode='Joe_l_eyebrow_joint'),
    ROUTE(fromField='value_changed',fromNode='r_eyelid_joint_RotationInterpolator',toField='set_rotation',toNode='Joe_r_eyelid_joint'),
    ROUTE(fromField='value_changed',fromNode='r_eyeball_joint_RotationInterpolator',toField='set_rotation',toNode='Joe_r_eyeball_joint'),
    ROUTE(fromField='value_changed',fromNode='r_eyebrow_joint_RotationInterpolator',toField='set_rotation',toNode='Joe_r_eyebrow_joint'),
    ROUTE(fromField='value_changed',fromNode='temporomandibular_RotationInterpolator',toField='set_rotation',toNode='Joe_temporomandibular'),
    ROUTE(fromField='value_changed',fromNode='l_sternoclavicular_RotationInterpolator',toField='set_rotation',toNode='Joe_l_sternoclavicular'),
    ROUTE(fromField='value_changed',fromNode='l_acromioclavicular_RotationInterpolator',toField='set_rotation',toNode='Joe_l_acromioclavicular'),
    ROUTE(fromField='value_changed',fromNode='l_shoulder_RotationInterpolator',toField='set_rotation',toNode='Joe_l_shoulder'),
    ROUTE(fromField='value_changed',fromNode='l_elbow_RotationInterpolator',toField='set_rotation',toNode='Joe_l_elbow'),
    ROUTE(fromField='value_changed',fromNode='l_wrist_RotationInterpolator',toField='set_rotation',toNode='Joe_l_wrist'),
    ROUTE(fromField='value_changed',fromNode='l_thumb1_RotationInterpolator',toField='set_rotation',toNode='Joe_l_thumb1'),
    ROUTE(fromField='value_changed',fromNode='l_thumb2_RotationInterpolator',toField='set_rotation',toNode='Joe_l_thumb2'),
    ROUTE(fromField='value_changed',fromNode='l_thumb3_RotationInterpolator',toField='set_rotation',toNode='Joe_l_thumb3'),
    ROUTE(fromField='value_changed',fromNode='l_index0_RotationInterpolator',toField='set_rotation',toNode='Joe_l_index0'),
    ROUTE(fromField='value_changed',fromNode='l_index1_RotationInterpolator',toField='set_rotation',toNode='Joe_l_index1'),
    ROUTE(fromField='value_changed',fromNode='l_index2_RotationInterpolator',toField='set_rotation',toNode='Joe_l_index2'),
    ROUTE(fromField='value_changed',fromNode='l_index3_RotationInterpolator',toField='set_rotation',toNode='Joe_l_index3'),
    ROUTE(fromField='value_changed',fromNode='l_middle0_RotationInterpolator',toField='set_rotation',toNode='Joe_l_middle0'),
    ROUTE(fromField='value_changed',fromNode='l_middle1_RotationInterpolator',toField='set_rotation',toNode='Joe_l_middle1'),
    ROUTE(fromField='value_changed',fromNode='l_middle2_RotationInterpolator',toField='set_rotation',toNode='Joe_l_middle2'),
    ROUTE(fromField='value_changed',fromNode='l_middle3_RotationInterpolator',toField='set_rotation',toNode='Joe_l_middle3'),
    ROUTE(fromField='value_changed',fromNode='l_ring0_RotationInterpolator',toField='set_rotation',toNode='Joe_l_ring0'),
    ROUTE(fromField='value_changed',fromNode='l_ring1_RotationInterpolator',toField='set_rotation',toNode='Joe_l_ring1'),
    ROUTE(fromField='value_changed',fromNode='l_ring2_RotationInterpolator',toField='set_rotation',toNode='Joe_l_ring2'),
    ROUTE(fromField='value_changed',fromNode='l_ring3_RotationInterpolator',toField='set_rotation',toNode='Joe_l_ring3'),
    ROUTE(fromField='value_changed',fromNode='l_pinky0_RotationInterpolator',toField='set_rotation',toNode='Joe_l_pinky0'),
    ROUTE(fromField='value_changed',fromNode='l_pinky1_RotationInterpolator',toField='set_rotation',toNode='Joe_l_pinky1'),
    ROUTE(fromField='value_changed',fromNode='l_pinky2_RotationInterpolator',toField='set_rotation',toNode='Joe_l_pinky2'),
    ROUTE(fromField='value_changed',fromNode='l_pinky3_RotationInterpolator',toField='set_rotation',toNode='Joe_l_pinky3'),
    ROUTE(fromField='value_changed',fromNode='r_sternoclavicular_RotationInterpolator',toField='set_rotation',toNode='Joe_r_sternoclavicular'),
    ROUTE(fromField='value_changed',fromNode='r_acromioclavicular_RotationInterpolator',toField='set_rotation',toNode='Joe_r_acromioclavicular'),
    ROUTE(fromField='value_changed',fromNode='r_shoulder_RotationInterpolator',toField='set_rotation',toNode='Joe_r_shoulder'),
    ROUTE(fromField='value_changed',fromNode='r_elbow_RotationInterpolator',toField='set_rotation',toNode='Joe_r_elbow'),
    ROUTE(fromField='value_changed',fromNode='r_wrist_RotationInterpolator',toField='set_rotation',toNode='Joe_r_wrist'),
    ROUTE(fromField='value_changed',fromNode='r_thumb1_RotationInterpolator',toField='set_rotation',toNode='Joe_r_thumb1'),
    ROUTE(fromField='value_changed',fromNode='r_thumb2_RotationInterpolator',toField='set_rotation',toNode='Joe_r_thumb2'),
    ROUTE(fromField='value_changed',fromNode='r_thumb3_RotationInterpolator',toField='set_rotation',toNode='Joe_r_thumb3'),
    ROUTE(fromField='value_changed',fromNode='r_index0_RotationInterpolator',toField='set_rotation',toNode='Joe_r_index0'),
    ROUTE(fromField='value_changed',fromNode='r_index1_RotationInterpolator',toField='set_rotation',toNode='Joe_r_index1'),
    ROUTE(fromField='value_changed',fromNode='r_index2_RotationInterpolator',toField='set_rotation',toNode='Joe_r_index2'),
    ROUTE(fromField='value_changed',fromNode='r_index3_RotationInterpolator',toField='set_rotation',toNode='Joe_r_index3'),
    ROUTE(fromField='value_changed',fromNode='r_middle0_RotationInterpolator',toField='set_rotation',toNode='Joe_r_middle0'),
    ROUTE(fromField='value_changed',fromNode='r_middle1_RotationInterpolator',toField='set_rotation',toNode='Joe_r_middle1'),
    ROUTE(fromField='value_changed',fromNode='r_middle2_RotationInterpolator',toField='set_rotation',toNode='Joe_r_middle2'),
    ROUTE(fromField='value_changed',fromNode='r_middle3_RotationInterpolator',toField='set_rotation',toNode='Joe_r_middle3'),
    ROUTE(fromField='value_changed',fromNode='r_ring0_RotationInterpolator',toField='set_rotation',toNode='Joe_r_ring0'),
    ROUTE(fromField='value_changed',fromNode='r_ring1_RotationInterpolator',toField='set_rotation',toNode='Joe_r_ring1'),
    ROUTE(fromField='value_changed',fromNode='r_ring2_RotationInterpolator',toField='set_rotation',toNode='Joe_r_ring2'),
    ROUTE(fromField='value_changed',fromNode='r_ring3_RotationInterpolator',toField='set_rotation',toNode='Joe_r_ring3'),
    ROUTE(fromField='value_changed',fromNode='r_pinky0_RotationInterpolator',toField='set_rotation',toNode='Joe_r_pinky0'),
    ROUTE(fromField='value_changed',fromNode='r_pinky1_RotationInterpolator',toField='set_rotation',toNode='Joe_r_pinky1'),
    ROUTE(fromField='value_changed',fromNode='r_pinky2_RotationInterpolator',toField='set_rotation',toNode='Joe_r_pinky2'),
    ROUTE(fromField='value_changed',fromNode='r_pinky3_RotationInterpolator',toField='set_rotation',toNode='Joe_r_pinky3'),
    Group(DEF='DisplacersAnimationGroup',
      #  TimeSensor DEF='skull_tipInterpolatorTimer' cycleInterval='5.73' loop='true' enabled='true'></TimeSensor 
      children=[
      ScalarInterpolator(DEF='skull_tipInterpolator',key=[0,0.1,0.2,0.35,0.6,0.7,0.85,0.88,0.94,0.97,1],keyValue=[0,0,0,0,0.2,0.4,1,0,1,0.4,0]),
      ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='skull_tipInterpolator'),
      ROUTE(fromField='value_changed',fromNode='skull_tipInterpolator',toField='weight',toNode='Joe_skull_tip_raiser_action')]),
    Group(DEF='SkinTextureTransformAnimationGroup',
      children=[
      ScalarInterpolator(DEF='SkinTextureTransformInterpolator',key=[0,0.2,0.4,0.5,0.6,0.7,0.8,1],keyValue=[0,0,0,0,0,1,2,0]),
      ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='SkinTextureTransformInterpolator'),
      ROUTE(fromField='value_changed',fromNode='SkinTextureTransformInterpolator',toField='rotation',toNode='KickTextureTransform')]),
    Group(
      children=[
      Transform(DEF='SBall',rotation=(0.7,0,0.7,0.1),scale=(0.23,0.23,0.23),translation=(-0.916,0.37,-0.92),
        children=[
        Shape(DEF='ball_Shape',
          appearance=Appearance(DEF='ball_Appearance',
            material=Material(DEF='ball_Material',diffuseColor=(0.3,0.3,1),emissiveColor=(0.3,0.3,0.33)),
            texture=ImageTexture(USE='JoeSkinImageTexture')),
          geometry=IndexedFaceSet(DEF='ball_IndexedFaceSet',coordIndex=[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,1,14,2,-1,2,14,15,-1,2,15,3,-1,3,15,16,-1,3,16,4,-1,4,16,17,-1,4,17,5,-1,5,17,18,-1,5,18,6,-1,6,18,19,-1,6,19,7,-1,7,19,20,-1,7,20,8,-1,8,20,21,-1,8,21,9,-1,9,21,22,-1,9,22,10,-1,10,22,23,-1,10,23,11,-1,11,23,24,-1,11,24,12,-1,12,24,13,-1,12,13,1,-1,13,25,26,-1,13,26,14,-1,14,26,27,-1,14,27,15,-1,15,27,28,-1,15,28,16,-1,16,28,29,-1,16,29,17,-1,17,29,30,-1,17,30,18,-1,18,30,31,-1,18,31,19,-1,19,31,32,-1,19,32,20,-1,20,32,33,-1,20,33,21,-1,21,33,34,-1,21,34,22,-1,22,34,35,-1,22,35,23,-1,23,35,36,-1,23,36,24,-1,24,36,25,-1,24,25,13,-1,25,37,38,-1,25,38,26,-1,26,38,39,-1,26,39,27,-1,27,39,40,-1,27,40,28,-1,28,40,41,-1,28,41,29,-1,29,41,42,-1,29,42,30,-1,30,42,43,-1,30,43,31,-1,31,43,44,-1,31,44,32,-1,32,44,45,-1,32,45,33,-1,33,45,46,-1,33,46,34,-1,34,46,47,-1,34,47,35,-1,35,47,48,-1,35,48,36,-1,36,48,37,-1,36,37,25,-1,37,49,50,-1,37,50,38,-1,38,50,51,-1,38,51,39,-1,39,51,52,-1,39,52,40,-1,40,52,53,-1,40,53,41,-1,41,53,54,-1,41,54,42,-1,42,54,55,-1,42,55,43,-1,43,55,56,-1,43,56,44,-1,44,56,57,-1,44,57,45,-1,45,57,58,-1,45,58,46,-1,46,58,59,-1,46,59,47,-1,47,59,60,-1,47,60,48,-1,48,60,49,-1,48,49,37,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1],
            coord=Coordinate(DEF='Ball_Coordinates',point=[(0,0.4675,0),(0,0.4049,-0.2338),(-0.1169,0.4049,-0.2024),(-0.2024,0.4049,-0.1169),(-0.2338,0.4049,0),(-0.2024,0.4049,0.1169),(-0.1169,0.4049,0.2024),(0,0.4049,0.2338),(0.1169,0.4049,0.2024),(0.2024,0.4049,0.1169),(0.2338,0.4049,0),(0.2024,0.4049,-0.1169),(0.1169,0.4049,-0.2024),(0,0.2338,-0.4049),(-0.2024,0.2338,-0.3506),(-0.3506,0.2338,-0.2024),(-0.4049,0.2338,0),(-0.3506,0.2338,0.2024),(-0.2024,0.2338,0.3506),(0,0.2338,0.4049),(0.2024,0.2338,0.3506),(0.3506,0.2338,0.2024),(0.4049,0.2338,0),(0.3506,0.2338,-0.2024),(0.2024,0.2338,-0.3506),(0,0,-0.4675),(-0.2338,0,-0.4049),(-0.4049,0,-0.2338),(-0.4675,0,0),(-0.4049,0,0.2338),(-0.2338,0,0.4049),(0,0,0.4675),(0.2338,0,0.4049),(0.4049,0,0.2338),(0.4675,0,0),(0.4049,0,-0.2338),(0.2338,0,-0.4049),(0,-0.2338,-0.4049),(-0.2024,-0.2338,-0.3506),(-0.3506,-0.2338,-0.2024),(-0.4049,-0.2338,0),(-0.3506,-0.2338,0.2024),(-0.2024,-0.2338,0.3506),(0,-0.2338,0.4049),(0.2024,-0.2338,0.3506),(0.3506,-0.2338,0.2024),(0.4049,-0.2338,0),(0.3506,-0.2338,-0.2024),(0.2024,-0.2338,-0.3506),(0,-0.4049,-0.2338),(-0.1169,-0.4049,-0.2024),(-0.2024,-0.4049,-0.1169),(-0.2338,-0.4049,0),(-0.2024,-0.4049,0.1169),(-0.1169,-0.4049,0.2024),(0,-0.4049,0.2338),(0.1169,-0.4049,0.2024),(0.2024,-0.4049,0.1169),(0.2338,-0.4049,0),(0.2024,-0.4049,-0.1169),(0.1169,-0.4049,-0.2024),(0,-0.4675,0)]))),
        Viewpoint(DEF='ballView_1',description='Ball View')]),
      #  Ball Animation interpolators 
      PositionInterpolator(DEF='ball_TranslationInterpolator',key=[0,0.4,0.409,1],keyValue=[(-1,0.4,-1),(0,0.07,0),(0.05,0.06,0.05),(2,4,10)]),
      OrientationInterpolator(DEF='ball_RotationInterpolator',key=[0,0.4,0.41,0.71,1],keyValue=[(1,0,1,0.25),(-1,0,-1,1.35),(-1,1,-1,3.35),(-1,0.2,-1,3),(-1,0.2,-1,3)]),
      #  Ball Animation Routes 
      ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='ball_TranslationInterpolator'),
      ROUTE(fromField='value_changed',fromNode='ball_TranslationInterpolator',toField='set_translation',toNode='SBall'),
      ROUTE(fromField='fraction_changed',fromNode='KickTimer',toField='set_fraction',toNode='ball_RotationInterpolator'),
      ROUTE(fromField='value_changed',fromNode='ball_RotationInterpolator',toField='set_rotation',toNode='SBall')]),
    Group(
      children=[
      Transform(scale=(0.2,0.2,0.2),
        children=[
        Shape(USE='AxisLinesShape')]),
      Transform(DEF='Circle0',scale=(1.175,1,1.175),
        children=[
        Shape(DEF='circle_Shape',
          appearance=Appearance(DEF='circle0_Appearance',
            material=Material(DEF='circle0_Material',ambientIntensity=0.9,diffuseColor=(0.9,0,0.7),emissiveColor=(0.425,0.486,1))),
          geometry=IndexedLineSet(DEF='Orbit1',coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1],
            coord=Coordinate(DEF='circle_Coordinates',point=[(1,0,0),(0.995,0,-0.105),(0.979,0,-0.208),(0.951,0,-0.309),(0.914,0,-0.407),(0.866,0,-0.5),(0.809,0,-0.588),(0.743,0,-0.669),(0.669,0,-0.743),(0.588,0,-0.809),(0.5,0,-0.866),(0.407,0,-0.914),(0.309,0,-0.951),(0.208,0,-0.978),(0.105,0,-0.995),(0,0,-1),(-0.105,0,-0.994522),(-0.208,0,-0.978),(-0.309,0,-0.951),(-0.407,0,-0.914),(-0.5,0,-0.866),(-0.588,0,-0.809),(-0.669,0,-0.743),(-0.743,0,-0.669),(-0.809,0,-0.588),(-0.866,0,-0.5),(-0.914,0,-0.407),(-0.951,0,-0.309),(-0.978,0,-0.208),(-0.995,0,-0.105),(-1,0,0),(-0.995,0,0.105),(-0.978,0,0.208),(-0.951,0,0.309),(-0.914,0,0.407),(-0.866,0,0.5),(-0.809,0,0.588),(-0.743,0,0.669),(-0.669,0,0.743),(-0.588,0,0.809),(-0.5,0,0.866),(-0.407,0,0.914),(-0.309,0,0.951),(-0.208,0,0.978),(-0.105,0,0.995),(0,0,1),(0.105,0,0.995),(0.208,0,0.978),(0.309,0,0.951),(0.407,0,0.914),(0.5,0,0.866),(0.588,0,0.809),(0.669,0,0.743),(0.743,0,0.669),(0.809,0,0.588),(0.866,0,0.5),(0.914,0,0.407),(0.951,0,0.309),(0.978,0,0.208),(0.995,0,0.104),(1,0,0)])))]),
      Transform(DEF='Circle1',scale=(0.5,1,0.5),
        children=[
        Shape(DEF='circle1_Shape',
          appearance=Appearance(DEF='circle1_Appearance',
            material=Material(DEF='circle1_Material',diffuseColor=(0.9,0,0.7),emissiveColor=(0.424956,0.483976,1))),
          geometry=IndexedLineSet(USE='Orbit1'))]),
      Transform(DEF='Circle2',scale=(0.25,1,0.25),
        children=[
        Shape(DEF='circle2_Shape',
          appearance=Appearance(DEF='circle2_Appearance',
            material=Material(DEF='circle2_Material',diffuseColor=(0.9,0,0.7),emissiveColor=(0.424956,0.483976,1))),
          geometry=IndexedLineSet(USE='Orbit1'))])])])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for JoeSkinTexcoordDisplacerKick.py:')
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

print("python JoeSkinTexcoordDisplacerKick.py load and self-test diagnostics complete.")